/****************************************************************************
** Meta object code from reading C++ file 'qmqttclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../qmqttclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmqttclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QMqttClient_t {
    QByteArrayData data[87];
    char stringdata0[1188];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QMqttClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QMqttClient_t qt_meta_stringdata_QMqttClient = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QMqttClient"
QT_MOC_LITERAL(1, 12, 9), // "connected"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 12), // "disconnected"
QT_MOC_LITERAL(4, 36, 15), // "messageReceived"
QT_MOC_LITERAL(5, 52, 7), // "message"
QT_MOC_LITERAL(6, 60, 14), // "QMqttTopicName"
QT_MOC_LITERAL(7, 75, 5), // "topic"
QT_MOC_LITERAL(8, 81, 20), // "messageStatusChanged"
QT_MOC_LITERAL(9, 102, 2), // "id"
QT_MOC_LITERAL(10, 105, 20), // "QMqtt::MessageStatus"
QT_MOC_LITERAL(11, 126, 1), // "s"
QT_MOC_LITERAL(12, 128, 28), // "QMqttMessageStatusProperties"
QT_MOC_LITERAL(13, 157, 10), // "properties"
QT_MOC_LITERAL(14, 168, 11), // "messageSent"
QT_MOC_LITERAL(15, 180, 20), // "pingResponseReceived"
QT_MOC_LITERAL(16, 201, 21), // "brokerSessionRestored"
QT_MOC_LITERAL(17, 223, 15), // "hostnameChanged"
QT_MOC_LITERAL(18, 239, 8), // "hostname"
QT_MOC_LITERAL(19, 248, 11), // "portChanged"
QT_MOC_LITERAL(20, 260, 4), // "port"
QT_MOC_LITERAL(21, 265, 15), // "clientIdChanged"
QT_MOC_LITERAL(22, 281, 8), // "clientId"
QT_MOC_LITERAL(23, 290, 16), // "keepAliveChanged"
QT_MOC_LITERAL(24, 307, 9), // "keepAlive"
QT_MOC_LITERAL(25, 317, 22), // "protocolVersionChanged"
QT_MOC_LITERAL(26, 340, 15), // "ProtocolVersion"
QT_MOC_LITERAL(27, 356, 15), // "protocolVersion"
QT_MOC_LITERAL(28, 372, 12), // "stateChanged"
QT_MOC_LITERAL(29, 385, 11), // "ClientState"
QT_MOC_LITERAL(30, 397, 5), // "state"
QT_MOC_LITERAL(31, 403, 12), // "errorChanged"
QT_MOC_LITERAL(32, 416, 11), // "ClientError"
QT_MOC_LITERAL(33, 428, 5), // "error"
QT_MOC_LITERAL(34, 434, 15), // "usernameChanged"
QT_MOC_LITERAL(35, 450, 8), // "username"
QT_MOC_LITERAL(36, 459, 15), // "passwordChanged"
QT_MOC_LITERAL(37, 475, 8), // "password"
QT_MOC_LITERAL(38, 484, 19), // "cleanSessionChanged"
QT_MOC_LITERAL(39, 504, 12), // "cleanSession"
QT_MOC_LITERAL(40, 517, 16), // "willTopicChanged"
QT_MOC_LITERAL(41, 534, 9), // "willTopic"
QT_MOC_LITERAL(42, 544, 14), // "willQoSChanged"
QT_MOC_LITERAL(43, 559, 7), // "willQoS"
QT_MOC_LITERAL(44, 567, 18), // "willMessageChanged"
QT_MOC_LITERAL(45, 586, 11), // "willMessage"
QT_MOC_LITERAL(46, 598, 17), // "willRetainChanged"
QT_MOC_LITERAL(47, 616, 10), // "willRetain"
QT_MOC_LITERAL(48, 627, 23), // "authenticationRequested"
QT_MOC_LITERAL(49, 651, 29), // "QMqttAuthenticationProperties"
QT_MOC_LITERAL(50, 681, 1), // "p"
QT_MOC_LITERAL(51, 683, 22), // "authenticationFinished"
QT_MOC_LITERAL(52, 706, 11), // "setHostname"
QT_MOC_LITERAL(53, 718, 7), // "setPort"
QT_MOC_LITERAL(54, 726, 11), // "setClientId"
QT_MOC_LITERAL(55, 738, 12), // "setKeepAlive"
QT_MOC_LITERAL(56, 751, 18), // "setProtocolVersion"
QT_MOC_LITERAL(57, 770, 8), // "setState"
QT_MOC_LITERAL(58, 779, 8), // "setError"
QT_MOC_LITERAL(59, 788, 11), // "setUsername"
QT_MOC_LITERAL(60, 800, 11), // "setPassword"
QT_MOC_LITERAL(61, 812, 15), // "setCleanSession"
QT_MOC_LITERAL(62, 828, 12), // "setWillTopic"
QT_MOC_LITERAL(63, 841, 10), // "setWillQoS"
QT_MOC_LITERAL(64, 852, 14), // "setWillMessage"
QT_MOC_LITERAL(65, 867, 13), // "setWillRetain"
QT_MOC_LITERAL(66, 881, 7), // "publish"
QT_MOC_LITERAL(67, 889, 3), // "qos"
QT_MOC_LITERAL(68, 893, 6), // "retain"
QT_MOC_LITERAL(69, 900, 22), // "QMqttPublishProperties"
QT_MOC_LITERAL(70, 923, 13), // "connectToHost"
QT_MOC_LITERAL(71, 937, 22), // "connectToHostEncrypted"
QT_MOC_LITERAL(72, 960, 11), // "sslPeerName"
QT_MOC_LITERAL(73, 972, 18), // "disconnectFromHost"
QT_MOC_LITERAL(74, 991, 12), // "Disconnected"
QT_MOC_LITERAL(75, 1004, 10), // "Connecting"
QT_MOC_LITERAL(76, 1015, 9), // "Connected"
QT_MOC_LITERAL(77, 1025, 7), // "NoError"
QT_MOC_LITERAL(78, 1033, 22), // "InvalidProtocolVersion"
QT_MOC_LITERAL(79, 1056, 10), // "IdRejected"
QT_MOC_LITERAL(80, 1067, 17), // "ServerUnavailable"
QT_MOC_LITERAL(81, 1085, 21), // "BadUsernameOrPassword"
QT_MOC_LITERAL(82, 1107, 13), // "NotAuthorized"
QT_MOC_LITERAL(83, 1121, 16), // "TransportInvalid"
QT_MOC_LITERAL(84, 1138, 17), // "ProtocolViolation"
QT_MOC_LITERAL(85, 1156, 12), // "UnknownError"
QT_MOC_LITERAL(86, 1169, 18) // "Mqtt5SpecificError"

    },
    "QMqttClient\0connected\0\0disconnected\0"
    "messageReceived\0message\0QMqttTopicName\0"
    "topic\0messageStatusChanged\0id\0"
    "QMqtt::MessageStatus\0s\0"
    "QMqttMessageStatusProperties\0properties\0"
    "messageSent\0pingResponseReceived\0"
    "brokerSessionRestored\0hostnameChanged\0"
    "hostname\0portChanged\0port\0clientIdChanged\0"
    "clientId\0keepAliveChanged\0keepAlive\0"
    "protocolVersionChanged\0ProtocolVersion\0"
    "protocolVersion\0stateChanged\0ClientState\0"
    "state\0errorChanged\0ClientError\0error\0"
    "usernameChanged\0username\0passwordChanged\0"
    "password\0cleanSessionChanged\0cleanSession\0"
    "willTopicChanged\0willTopic\0willQoSChanged\0"
    "willQoS\0willMessageChanged\0willMessage\0"
    "willRetainChanged\0willRetain\0"
    "authenticationRequested\0"
    "QMqttAuthenticationProperties\0p\0"
    "authenticationFinished\0setHostname\0"
    "setPort\0setClientId\0setKeepAlive\0"
    "setProtocolVersion\0setState\0setError\0"
    "setUsername\0setPassword\0setCleanSession\0"
    "setWillTopic\0setWillQoS\0setWillMessage\0"
    "setWillRetain\0publish\0qos\0retain\0"
    "QMqttPublishProperties\0connectToHost\0"
    "connectToHostEncrypted\0sslPeerName\0"
    "disconnectFromHost\0Disconnected\0"
    "Connecting\0Connected\0NoError\0"
    "InvalidProtocolVersion\0IdRejected\0"
    "ServerUnavailable\0BadUsernameOrPassword\0"
    "NotAuthorized\0TransportInvalid\0"
    "ProtocolViolation\0UnknownError\0"
    "Mqtt5SpecificError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QMqttClient[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      50,   14, // methods
      14,  438, // properties
       2,  494, // enums/sets
       0,    0, // constructors
       0,       // flags
      24,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  264,    2, 0x06 /* Public */,
       3,    0,  265,    2, 0x06 /* Public */,
       4,    2,  266,    2, 0x06 /* Public */,
       4,    1,  271,    2, 0x26 /* Public | MethodCloned */,
       8,    3,  274,    2, 0x06 /* Public */,
      14,    1,  281,    2, 0x06 /* Public */,
      15,    0,  284,    2, 0x06 /* Public */,
      16,    0,  285,    2, 0x06 /* Public */,
      17,    1,  286,    2, 0x06 /* Public */,
      19,    1,  289,    2, 0x06 /* Public */,
      21,    1,  292,    2, 0x06 /* Public */,
      23,    1,  295,    2, 0x06 /* Public */,
      25,    1,  298,    2, 0x06 /* Public */,
      28,    1,  301,    2, 0x06 /* Public */,
      31,    1,  304,    2, 0x06 /* Public */,
      34,    1,  307,    2, 0x06 /* Public */,
      36,    1,  310,    2, 0x06 /* Public */,
      38,    1,  313,    2, 0x06 /* Public */,
      40,    1,  316,    2, 0x06 /* Public */,
      42,    1,  319,    2, 0x06 /* Public */,
      44,    1,  322,    2, 0x06 /* Public */,
      46,    1,  325,    2, 0x06 /* Public */,
      48,    1,  328,    2, 0x06 /* Public */,
      51,    1,  331,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      52,    1,  334,    2, 0x0a /* Public */,
      53,    1,  337,    2, 0x0a /* Public */,
      54,    1,  340,    2, 0x0a /* Public */,
      55,    1,  343,    2, 0x0a /* Public */,
      56,    1,  346,    2, 0x0a /* Public */,
      57,    1,  349,    2, 0x0a /* Public */,
      58,    1,  352,    2, 0x0a /* Public */,
      59,    1,  355,    2, 0x0a /* Public */,
      60,    1,  358,    2, 0x0a /* Public */,
      61,    1,  361,    2, 0x0a /* Public */,
      62,    1,  364,    2, 0x0a /* Public */,
      63,    1,  367,    2, 0x0a /* Public */,
      64,    1,  370,    2, 0x0a /* Public */,
      65,    1,  373,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      66,    4,  376,    2, 0x02 /* Public */,
      66,    3,  385,    2, 0x22 /* Public | MethodCloned */,
      66,    2,  392,    2, 0x22 /* Public | MethodCloned */,
      66,    1,  397,    2, 0x22 /* Public | MethodCloned */,
      66,    5,  400,    2, 0x02 /* Public */,
      66,    4,  411,    2, 0x22 /* Public | MethodCloned */,
      66,    3,  420,    2, 0x22 /* Public | MethodCloned */,
      66,    2,  427,    2, 0x22 /* Public | MethodCloned */,
      70,    0,  432,    2, 0x02 /* Public */,
      71,    1,  433,    2, 0x02 /* Public */,
      71,    0,  436,    2, 0x22 /* Public | MethodCloned */,
      73,    0,  437,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray, 0x80000000 | 6,    5,    7,
    QMetaType::Void, QMetaType::QByteArray,    5,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 10, 0x80000000 | 12,    9,   11,   13,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::UShort,   20,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void, QMetaType::UShort,   24,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, 0x80000000 | 32,   33,
    QMetaType::Void, QMetaType::QString,   35,
    QMetaType::Void, QMetaType::QString,   37,
    QMetaType::Void, QMetaType::Bool,   39,
    QMetaType::Void, QMetaType::QString,   41,
    QMetaType::Void, QMetaType::UChar,   43,
    QMetaType::Void, QMetaType::QByteArray,   45,
    QMetaType::Void, QMetaType::Bool,   47,
    QMetaType::Void, 0x80000000 | 49,   50,
    QMetaType::Void, 0x80000000 | 49,   50,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::UShort,   20,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void, QMetaType::UShort,   24,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, 0x80000000 | 32,   33,
    QMetaType::Void, QMetaType::QString,   35,
    QMetaType::Void, QMetaType::QString,   37,
    QMetaType::Void, QMetaType::Bool,   39,
    QMetaType::Void, QMetaType::QString,   41,
    QMetaType::Void, QMetaType::UChar,   43,
    QMetaType::Void, QMetaType::QByteArray,   45,
    QMetaType::Void, QMetaType::Bool,   47,

 // methods: parameters
    QMetaType::Int, 0x80000000 | 6, QMetaType::QByteArray, QMetaType::UChar, QMetaType::Bool,    7,    5,   67,   68,
    QMetaType::Int, 0x80000000 | 6, QMetaType::QByteArray, QMetaType::UChar,    7,    5,   67,
    QMetaType::Int, 0x80000000 | 6, QMetaType::QByteArray,    7,    5,
    QMetaType::Int, 0x80000000 | 6,    7,
    QMetaType::Int, 0x80000000 | 6, 0x80000000 | 69, QMetaType::QByteArray, QMetaType::UChar, QMetaType::Bool,    7,   13,    5,   67,   68,
    QMetaType::Int, 0x80000000 | 6, 0x80000000 | 69, QMetaType::QByteArray, QMetaType::UChar,    7,   13,    5,   67,
    QMetaType::Int, 0x80000000 | 6, 0x80000000 | 69, QMetaType::QByteArray,    7,   13,    5,
    QMetaType::Int, 0x80000000 | 6, 0x80000000 | 69,    7,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   72,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      22, QMetaType::QString, 0x00495103,
      18, QMetaType::QString, 0x00495103,
      20, QMetaType::UShort, 0x00495103,
      24, QMetaType::UShort, 0x00495103,
      27, 0x80000000 | 26, 0x0049510b,
      30, 0x80000000 | 29, 0x0049510b,
      33, 0x80000000 | 32, 0x0049510b,
      35, QMetaType::QString, 0x00495103,
      37, QMetaType::QString, 0x00495103,
      39, QMetaType::Bool, 0x00495103,
      41, QMetaType::QString, 0x00495103,
      45, QMetaType::QByteArray, 0x00495103,
      43, QMetaType::UChar, 0x00495103,
      47, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
      10,
       8,
       9,
      11,
      12,
      13,
      14,
      15,
      16,
      17,
      18,
      20,
      19,
      21,

 // enums: name, alias, flags, count, data
      29,   29, 0x0,    3,  504,
      32,   32, 0x0,   10,  510,

 // enum data: key, value
      74, uint(QMqttClient::Disconnected),
      75, uint(QMqttClient::Connecting),
      76, uint(QMqttClient::Connected),
      77, uint(QMqttClient::NoError),
      78, uint(QMqttClient::InvalidProtocolVersion),
      79, uint(QMqttClient::IdRejected),
      80, uint(QMqttClient::ServerUnavailable),
      81, uint(QMqttClient::BadUsernameOrPassword),
      82, uint(QMqttClient::NotAuthorized),
      83, uint(QMqttClient::TransportInvalid),
      84, uint(QMqttClient::ProtocolViolation),
      85, uint(QMqttClient::UnknownError),
      86, uint(QMqttClient::Mqtt5SpecificError),

       0        // eod
};

void QMqttClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QMqttClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connected(); break;
        case 1: _t->disconnected(); break;
        case 2: _t->messageReceived((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QMqttTopicName(*)>(_a[2]))); break;
        case 3: _t->messageReceived((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 4: _t->messageStatusChanged((*reinterpret_cast< qint32(*)>(_a[1])),(*reinterpret_cast< QMqtt::MessageStatus(*)>(_a[2])),(*reinterpret_cast< const QMqttMessageStatusProperties(*)>(_a[3]))); break;
        case 5: _t->messageSent((*reinterpret_cast< qint32(*)>(_a[1]))); break;
        case 6: _t->pingResponseReceived(); break;
        case 7: _t->brokerSessionRestored(); break;
        case 8: _t->hostnameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->portChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 10: _t->clientIdChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->keepAliveChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 12: _t->protocolVersionChanged((*reinterpret_cast< ProtocolVersion(*)>(_a[1]))); break;
        case 13: _t->stateChanged((*reinterpret_cast< ClientState(*)>(_a[1]))); break;
        case 14: _t->errorChanged((*reinterpret_cast< ClientError(*)>(_a[1]))); break;
        case 15: _t->usernameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 16: _t->passwordChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 17: _t->cleanSessionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->willTopicChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 19: _t->willQoSChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 20: _t->willMessageChanged((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 21: _t->willRetainChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->authenticationRequested((*reinterpret_cast< const QMqttAuthenticationProperties(*)>(_a[1]))); break;
        case 23: _t->authenticationFinished((*reinterpret_cast< const QMqttAuthenticationProperties(*)>(_a[1]))); break;
        case 24: _t->setHostname((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 25: _t->setPort((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 26: _t->setClientId((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 27: _t->setKeepAlive((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 28: _t->setProtocolVersion((*reinterpret_cast< ProtocolVersion(*)>(_a[1]))); break;
        case 29: _t->setState((*reinterpret_cast< ClientState(*)>(_a[1]))); break;
        case 30: _t->setError((*reinterpret_cast< ClientError(*)>(_a[1]))); break;
        case 31: _t->setUsername((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 32: _t->setPassword((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 33: _t->setCleanSession((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: _t->setWillTopic((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 35: _t->setWillQoS((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 36: _t->setWillMessage((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 37: _t->setWillRetain((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 38: { qint32 _r = _t->publish((*reinterpret_cast< const QMqttTopicName(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< quint8(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = std::move(_r); }  break;
        case 39: { qint32 _r = _t->publish((*reinterpret_cast< const QMqttTopicName(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< quint8(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = std::move(_r); }  break;
        case 40: { qint32 _r = _t->publish((*reinterpret_cast< const QMqttTopicName(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = std::move(_r); }  break;
        case 41: { qint32 _r = _t->publish((*reinterpret_cast< const QMqttTopicName(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = std::move(_r); }  break;
        case 42: { qint32 _r = _t->publish((*reinterpret_cast< const QMqttTopicName(*)>(_a[1])),(*reinterpret_cast< const QMqttPublishProperties(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3])),(*reinterpret_cast< quint8(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = std::move(_r); }  break;
        case 43: { qint32 _r = _t->publish((*reinterpret_cast< const QMqttTopicName(*)>(_a[1])),(*reinterpret_cast< const QMqttPublishProperties(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3])),(*reinterpret_cast< quint8(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = std::move(_r); }  break;
        case 44: { qint32 _r = _t->publish((*reinterpret_cast< const QMqttTopicName(*)>(_a[1])),(*reinterpret_cast< const QMqttPublishProperties(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = std::move(_r); }  break;
        case 45: { qint32 _r = _t->publish((*reinterpret_cast< const QMqttTopicName(*)>(_a[1])),(*reinterpret_cast< const QMqttPublishProperties(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = std::move(_r); }  break;
        case 46: _t->connectToHost(); break;
        case 47: _t->connectToHostEncrypted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 48: _t->connectToHostEncrypted(); break;
        case 49: _t->disconnectFromHost(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMqttTopicName >(); break;
            }
            break;
        case 38:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMqttTopicName >(); break;
            }
            break;
        case 39:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMqttTopicName >(); break;
            }
            break;
        case 40:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMqttTopicName >(); break;
            }
            break;
        case 41:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMqttTopicName >(); break;
            }
            break;
        case 42:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMqttTopicName >(); break;
            }
            break;
        case 43:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMqttTopicName >(); break;
            }
            break;
        case 44:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMqttTopicName >(); break;
            }
            break;
        case 45:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMqttTopicName >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QMqttClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMqttClient::connected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QMqttClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMqttClient::disconnected)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QMqttClient::*)(const QByteArray & , const QMqttTopicName & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMqttClient::messageReceived)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QMqttClient::*)(qint32 , QMqtt::MessageStatus , const QMqttMessageStatusProperties & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMqttClient::messageStatusChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QMqttClient::*)(qint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMqttClient::messageSent)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QMqttClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMqttClient::pingResponseReceived)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QMqttClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMqttClient::brokerSessionRestored)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (QMqttClient::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMqttClient::hostnameChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (QMqttClient::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMqttClient::portChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (QMqttClient::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMqttClient::clientIdChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (QMqttClient::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMqttClient::keepAliveChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (QMqttClient::*)(ProtocolVersion );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMqttClient::protocolVersionChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (QMqttClient::*)(ClientState );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMqttClient::stateChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (QMqttClient::*)(ClientError );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMqttClient::errorChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (QMqttClient::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMqttClient::usernameChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (QMqttClient::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMqttClient::passwordChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (QMqttClient::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMqttClient::cleanSessionChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (QMqttClient::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMqttClient::willTopicChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (QMqttClient::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMqttClient::willQoSChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (QMqttClient::*)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMqttClient::willMessageChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (QMqttClient::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMqttClient::willRetainChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (QMqttClient::*)(const QMqttAuthenticationProperties & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMqttClient::authenticationRequested)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (QMqttClient::*)(const QMqttAuthenticationProperties & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMqttClient::authenticationFinished)) {
                *result = 23;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QMqttClient *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->clientId(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->hostname(); break;
        case 2: *reinterpret_cast< quint16*>(_v) = _t->port(); break;
        case 3: *reinterpret_cast< quint16*>(_v) = _t->keepAlive(); break;
        case 4: *reinterpret_cast< ProtocolVersion*>(_v) = _t->protocolVersion(); break;
        case 5: *reinterpret_cast< ClientState*>(_v) = _t->state(); break;
        case 6: *reinterpret_cast< ClientError*>(_v) = _t->error(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->username(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->password(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->cleanSession(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->willTopic(); break;
        case 11: *reinterpret_cast< QByteArray*>(_v) = _t->willMessage(); break;
        case 12: *reinterpret_cast< quint8*>(_v) = _t->willQoS(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->willRetain(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QMqttClient *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setClientId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setHostname(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setPort(*reinterpret_cast< quint16*>(_v)); break;
        case 3: _t->setKeepAlive(*reinterpret_cast< quint16*>(_v)); break;
        case 4: _t->setProtocolVersion(*reinterpret_cast< ProtocolVersion*>(_v)); break;
        case 5: _t->setState(*reinterpret_cast< ClientState*>(_v)); break;
        case 6: _t->setError(*reinterpret_cast< ClientError*>(_v)); break;
        case 7: _t->setUsername(*reinterpret_cast< QString*>(_v)); break;
        case 8: _t->setPassword(*reinterpret_cast< QString*>(_v)); break;
        case 9: _t->setCleanSession(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setWillTopic(*reinterpret_cast< QString*>(_v)); break;
        case 11: _t->setWillMessage(*reinterpret_cast< QByteArray*>(_v)); break;
        case 12: _t->setWillQoS(*reinterpret_cast< quint8*>(_v)); break;
        case 13: _t->setWillRetain(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QMqttClient::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_QMqttClient.data,
    qt_meta_data_QMqttClient,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QMqttClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMqttClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QMqttClient.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QMqttClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 50)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 50;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 50)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 50;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 14;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QMqttClient::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QMqttClient::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QMqttClient::messageReceived(const QByteArray & _t1, const QMqttTopicName & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 4
void QMqttClient::messageStatusChanged(qint32 _t1, QMqtt::MessageStatus _t2, const QMqttMessageStatusProperties & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QMqttClient::messageSent(qint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QMqttClient::pingResponseReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QMqttClient::brokerSessionRestored()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QMqttClient::hostnameChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QMqttClient::portChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QMqttClient::clientIdChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QMqttClient::keepAliveChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QMqttClient::protocolVersionChanged(ProtocolVersion _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void QMqttClient::stateChanged(ClientState _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void QMqttClient::errorChanged(ClientError _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void QMqttClient::usernameChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void QMqttClient::passwordChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void QMqttClient::cleanSessionChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void QMqttClient::willTopicChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void QMqttClient::willQoSChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void QMqttClient::willMessageChanged(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void QMqttClient::willRetainChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void QMqttClient::authenticationRequested(const QMqttAuthenticationProperties & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void QMqttClient::authenticationFinished(const QMqttAuthenticationProperties & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
