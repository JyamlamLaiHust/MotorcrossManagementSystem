# 项目架构

## 01 桌面端

将所有对数据库的操作改成发送 json 字符串到服务器

HUST 物联网综合应用系统课程设计 —— 基于 RFID 技术的越野赛成绩管理系统设计与实现  

github：https://github.com/JyamlamLaiHust/MotorcrossManagementSystem

# 01 需求分析

> 参考：
>
> - [TNF 100 越野赛规则](http://www.tnf100.cn/page-L51XZa20wAYzDAM6vG98.html)

## 比赛规则

- 比赛在起点、中间计时打卡点（不少于3个）和终点设有芯片读写器，比赛距离为5公里。
- 选手在比赛过程中，须依次通过所有计时打卡点并完成打卡，成绩方可有效。
- 要在关门时间内（关闭时长可自行设定）完成比赛。

## 实现功能

- 实现打卡功能
- 系统具备智能卡与运动员身份证绑定功能
- 绑定越野赛路径 和 打卡点设定
- 运动员打卡数据的记录及成绩统计功能
- 依据运动员性别、年龄组别（自行设定）分别统计运动员成绩
- 统计成绩导出以及运动员成绩短信发送功能  

# 02 表设计

> 参考：
>
> - [Qt 连接 MySQL 数据库](https://blog.csdn.net/bailang_zhizun/article/details/116232802)
> - [MySQL 服务无法启动](https://blog.csdn.net/ks_1998/article/details/103384795)

- 值得一提的是，需要在终端进入 MySQL 数据库后，先通过 `CREATE DATABASE crossroadmanagesystem;` 建立数据库后才能连通数据库。 

```cpp
bool DBManager::createDB() // createDB by name
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setPort(3306);
    db.setDatabaseName("crossroadmanagesystem");
    db.setUserName("root");
    db.setPassword("123456");
    bool ok = db.open();
    if (ok){
//        QMessageBox::information(this, "infor", "success");
        qDebug() << "database create success!";
        return true;
    }
    else {
//        QMessageBox::information(this, "infor", "open failed");
        qDebug()<< "database create failed!";
        return false;
    }
}
```

- 管理员表 AdminTableModel


```mysql
CREATE TABLE table_admins (
    用户名 VARCHAR(100) NOT NULL PRIMARY KEY,
    密码 VARCHAR(100) NOT NULL,
    备注信息 VARCHAR(100)
);
```

- 运动员表

```mysql
CREATE TABLE table_participants (
    运动员id INT AUTO_INCREMENT PRIMARY KEY,
    姓名 VARCHAR(100) NOT NULL,
    参赛名称 VARCHAR(100) NOT NULL,
    性别 CHAR(100) NOT NULL,
    身份证 VARCHAR(50) UNIQUE NOT NULL,
    联系方式 VARCHAR(100),
    T恤尺码 char(100) DEFAULT 'L',
    rfid标签卡号 VARCHAR(100) UNIQUE NOT NULL,
    紧急联系人姓名 VARCHAR(100),
    紧急联系人联系方式 VARCHAR(100)
);
```

- 赛事表
  - 赛事 id
  - 赛事名称
  - 赛事开始时间
  - 赛事结束时间
  - 赛程距离
  - 总攀升高度
  - 赛事报名费用

```mysql
CREATE TABLE table_matches (
    赛事id INT AUTO_INCREMENT PRIMARY KEY,
    赛事名称 VARCHAR(100) NOT NULL UNIQUE,
    赛事开始时间 DATETIME NOT NULL,
    赛事结束时间 DATETIME NOT NULL,
    赛程距离 FLOAT NOT NULL,
    总攀升高度 FLOAT,
    赛事报名费用 DECIMAL(10, 2) 
);
```

- 打卡点表
  - 打卡点 id
  - 对应赛事 id
  - 检查站名称
  - 分段距离
  - 累计距离
  - 分段攀升
  - 总攀升
  - 开放时间
  - 关闭时间

```mysql
CREATE TABLE table_checkpoints (
    打卡点id INT AUTO_INCREMENT PRIMARY KEY,
    对应赛事名称 VARCHAR(100) NOT NULL,
    检查站名称 VARCHAR(100) NOT NULL,
    分段距离 FLOAT,
    分段攀升 FLOAT,
    开放时间 DATETIME,
    关闭时间 DATETIME,
    FOREIGN KEY (对应赛事名称) REFERENCES table_matches(赛事名称)
);

```

- 成绩表
  - 成绩记录 id
  - 赛事名称
  - 打卡点名称
  - 时间戳
  - 方向
  - 总用时 （现在的时间 - 比赛开始时间）
  - 名次 （对参加同一比赛的所有运动员排序，返回名次）
  - **rfid 卡号**

```mysql
CREATE TABLE table_results (
    成绩记录id INT AUTO_INCREMENT PRIMARY KEY,
    赛事名称 VARCHAR(100),
    打卡点名称 VARCHAR(100),
    时间戳 DATETIME,
    方向 CHAR(1) NOT NULL,
    总用时 TIME,
    名次 INT,
    rfid标签卡号 VARCHAR(20) UNIQUE NOT NULL
);
```

> **rank 是一个 SQL 标准函数，不能用于键命名。**

- RFID 标签记录表（弃用）
  - 标签 id
  - 标签卡号
  - 检查站 id
  - 时间戳
  - 方向（记录参赛者是离开检查站还是到达检查站）

```mysql
CREATE TABLE rfid_records (
    record_id INT AUTO_INCREMENT PRIMARY KEY,
    rfid_tag_id VARCHAR(20) NOT NULL,
    checkpoint_id INT NOT NULL,
    timestamp DATETIME NOT NULL,
    direction CHAR(1) NOT NULL,
    FOREIGN KEY (rfid_tag_id) REFERENCES participants(rfid_tag_id),
    FOREIGN KEY (checkpoint_id) REFERENCES checkpoints(checkpoint_id)
);
```

participants、matches、checkpoints、rfid、results 表的顺序

- matches 要在 checkpoints 前面
- participants、matches、checkpoints 要在 results 前面
- participants、checkpoints 要在 rfid 前面

> **引用外键必须参考已经建好的表，而且数据类型必须相同**
>
> **只能引用别表的主键作为外键**



# 03 功能实现

~~**画面设置为 750px * 600px**~~ 画面设置为 `500px *350px`

- 管理员登录 Login

  - 采用简单的 MD5 加密，数据库中无法直接看到密码明文。
  - 设置不能重复登录 **New**

- （读写器）连接 Connect

  需要调整读写器选中 高频13.56MHz

  ```makefile
  # 除加入头文件以外，还需要在.pro文件中加入库文件和指定库文件路径
  DISTFILES += \
      lib/libM1356Dll.a \
      lib/M1356Dll.dll
  
  win32: LIBS += -L$$PWD/lib/ -lM1356Dll
  ```

- 数据导出 Export

  ```sql
  SELECT TABLE_NAME 
  FROM INFORMATION_SCHEMA.TABLES 
  WHERE TABLE_SCHEMA = DATABASE() 
  ORDER BY TABLE_NAME;
  ```

- 主页 Welcome

  - 新增一个 Frame -> 右键 【修改样式表】

    ```css
    QFrame
    {
    	border-image: url(:/new/prefix1/mainpage.png);
    }
    ```

---

- 运动员报名 CheckIn

  - 录入基本信息
    - 运动员 id（自动生成，不需要录入）
    - 填空：姓名、身份证、联系方式、紧急联系人姓名、紧急联系人联系方式
    - 选择：性别、T恤尺码
    - 自动识别：RFID 标签编号
  - ViewTable 实时展示已经录入的信息

- 运动员退出比赛 ExitGames

  根据 rfid卡号寻找运动员记录，并删除该记录。

  ```cpp
  /**
   * @brief RegistorWidget::on_tagIdReceived
   * @param tagId 标签ID(卡号)
   * 当读取到卡号时调用该方法
   */
  void ExitGames::on_tagIdReceived(QString tagId){
      if (rfidTag) {
          *rfidTag = tagId; // 更新rfidTag的值
          ui->rfidTag_lineEdit->setText(tagId); // 更新界面上的显示
      }
  }
  ```

- 比赛举行 HoldGames

  - 越野赛路径绑定和打卡点设定 —— 插入赛事表记录

    - 通过赛事 id 区分不同赛事的打卡点 —— 设计两个comboBox（赛事 id 和打卡点 id）

      ```cpp
      // 让QDateEdit显示当前时间
          ui->dateEdit->setDisplayFormat("yyyy-MM-dd");
          ui->dateEdit->setDateTime(QDateTime::currentDateTime());
      ```

- 取消比赛 cancelGames

  根据 比赛名称 寻找比赛记录，并删除该记录。

- 打卡 SignUp

  > [数据库与 QtComboBox 关联](https://www.cnblogs.com/LyShark/p/15656095.html) 

  - 记录打卡时间 —— 插入成绩表记录
  - 判断逻辑（打卡时间不得小于开门时间或者大于关门时间）
  - 发送成绩通知

    - 完成所有打卡点 print 一个成绩单通过 **MQTT 通信** 发送到每个用户

  - 成绩表查询 Query

    - 通过不同的筛选条件将数据库展现到前端页面

# 04 服务器部署

- 安全组
- 

# 05 其它

- `.ui`文件界面和运行显示界面不一样

  ```
  .setAttribute(Qt::AA_EnableHighDpiScaling);
  ```

  有用，但不多

- QPushButton

  > [QPushButton 用法](https://blog.csdn.net/Fdog_/article/details/113041687)

# 06 转移到 visual studio

~~这个有点夸张的，我觉得值得单开一章说明一下。~~

**OK，从入坑到放弃。结论：不要痴心妄想，库文件是 32 位的，你不要去挑战未知**

> 参考：
>
> - [vs Qt 插件安装](https://365.kdocs.cn/l/csI0iin9yuKS?openfrom=docs)
> - [用 vs 打开 Qt 项目 .pro 文件](https://blog.csdn.net/shuilan0066/article/details/110232474)
> - [Qt 旧版本下载 百度网盘链接](https://blog.csdn.net/haigear/article/details/128696201)
> - [从 mingw 转换为 MSVC 编译报错](https://blog.csdn.net/qq_38141255/article/details/130871675)
> - [MSVC 编辑器安装](https://blog.csdn.net/Copperxcx/article/details/122540629)
> - [安装 Windows Development Kits](https://blog.csdn.net/u014779536/article/details/106848863)
> - [正确配置 MSVC](https://blog.csdn.net/zx19890621/article/details/113781756)
> - [编译源码 制作 .lib 库](https://blog.csdn.net/sj2050/article/details/81700183)

# 07 Mosquitto 和 MQTT

> reference：
>
> - [Qt 官方文档翻译](https://blog.csdn.net/kouqi627/article/details/115109871)
> - [mqtt 源码编译](https://blog.csdn.net/qq_38141255/article/details/135215186)
> - [QT 使用 mqtt 协议 部署 mosiquitto 作为 mqtt 的服务器](https://blog.csdn.net/m0_55686284/article/details/131179948)
> - [阿里云搭建 MQTT 服务器](https://blog.csdn.net/qq_33406883/article/details/107492604)
> - [MQTT 协议入门指南](http://www.steves-internet-guide.com/mqtt/)

# 08 目前待解决问题

- 完善 `readme.md`

- 数据库上云

- 单元测试

- 打包 [Qt 打包 .exe 文件](https://www.cnblogs.com/JinShanCheShen/p/16194526.html)

- tomcat 上线

# 09 WebApp

- 解析 mqtt 消息并和数据库进行交互
- 展示操作记录
