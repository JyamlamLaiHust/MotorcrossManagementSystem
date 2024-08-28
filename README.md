HUST 物联网综合应用系统课程设计 —— 基于 RFID 技术的越野赛成绩管理系统设计与实现  

github：https://github.com/JyamlamLaiHust/MotorcrossManagementSystem

> references：
>
> - [Qt 连接 MySQL 数据库](https://blog.csdn.net/joey_ro/article/details/105411135)
> - [TNF 100 越野赛规则](http://www.tnf100.cn/page-L51XZa20wAYzDAM6vG98.html)
> - [Qt 打包 .exe 文件](https://wenku.csdn.net/answer/e0052378b1c348dfb6f592e42dda03b1)

# 01 需求分析

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

- 管理员表
  - 管理员编号
  - 管理员用户名
  - 管理员密码

- 运动员表
  - 运动员 id
  - 姓名
  - 性别
  - 身份证
  - 联系方式
  - T 恤尺码
  - RFID 标签编号
  - 紧急联系人姓名
  - 紧急联系人联系方式

```mysql
CREATE TABLE participants (
    participant_id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(100) NOT NULL,
    gender CHAR(1) NOT NULL,
    id_number VARCHAR(50) UNIQUE NOT NULL,
    contact_number VARCHAR(20),
    size_tshirt char(5) DEFAULT 'L',
    rfid_tag_id VARCHAR(20) UNIQUE NOT NULL,
    emergency_contact_name VARCHAR(100),
    emergency_contact_number VARCHAR(20)
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
CREATE TABLE matches (
    event_id INT AUTO_INCREMENT PRIMARY KEY,
    event_name VARCHAR(100) NOT NULL,
    start_date DATETIME NOT NULL,
    end_date DATETIME NOT NULL,
    race_distance FLOAT NOT NULL,
    total_elevation_gain FLOAT,
    registration_fee DECIMAL(10, 2)
);
```

- 成绩表
  - 成绩记录 id
  - 赛事 id
  - 运动员 id
  - 打卡点 id
  - 到达时间
  - 离开时间
  - 总用时
  - 名次

```mysql
CREATE TABLE results (
    result_id INT AUTO_INCREMENT PRIMARY KEY,
    participant_id INT NOT NULL,
    event_id INT NOT NULL,
    checkpoint_id INT NOT NULL,
    arrival_time DATETIME,
    departure_time DATETIME,
    total_time TIME,
    ranking INT,
    FOREIGN KEY (participant_id) REFERENCES participants(participant_id),
    FOREIGN KEY (event_id) REFERENCES events(event_id),
    FOREIGN KEY (checkpoint_id) REFERENCES checkpoints(checkpoint_id)
);
```

> **rank 是一个 SQL 标准函数，不能用于键命名。**

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
CREATE TABLE checkpoints (
    checkpoint_id INT AUTO_INCREMENT PRIMARY KEY,
    event_id INT NOT NULL,
    checkpoint_name VARCHAR(100) NOT NULL,
    checkpoint_segmentDistance FLOAT,
    checkpoint_cumulativeDistance FLOAT,
    checkpoint_segmentElevation FLOAT,
    checkpoint_cumulativeElevation FLOAT,
    checkpoint_openTime DATETIME,
    checkpoint_closeTime DATETIME,
    FOREIGN KEY (event_id) REFERENCES events(event_id)
);

```

- RFID 标签记录表
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



# 03 功能实现

**界面大小统一设置为 600 * 450 px**

- 管理员登录

- （读写器）连接

  ```makefile
  # 除加入头文件以外，还需要在.pro文件中加入库文件和指定库文件路径
  DISTFILES += \
      lib/libM1356Dll.a \
      lib/M1356Dll.dll
  
  win32: LIBS += -L$$PWD/lib/ -lM1356Dll
  ```

  

- 数据导出

- 主页
