/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CrossroadGradeManageSystem/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[23];
    char stringdata0[224];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 10), // "sendAction"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 8), // "QAction*"
QT_MOC_LITERAL(4, 32, 6), // "action"
QT_MOC_LITERAL(5, 39, 10), // "sendCardId"
QT_MOC_LITERAL(6, 50, 5), // "tagID"
QT_MOC_LITERAL(7, 56, 5), // "About"
QT_MOC_LITERAL(8, 62, 11), // "ExportTable"
QT_MOC_LITERAL(9, 74, 5), // "Login"
QT_MOC_LITERAL(10, 80, 7), // "Connect"
QT_MOC_LITERAL(11, 88, 10), // "Disconnect"
QT_MOC_LITERAL(12, 99, 15), // "ExitApplication"
QT_MOC_LITERAL(13, 115, 12), // "viewMainPage"
QT_MOC_LITERAL(14, 128, 16), // "onOperationError"
QT_MOC_LITERAL(15, 145, 3), // "msg"
QT_MOC_LITERAL(16, 149, 13), // "onSendMessage"
QT_MOC_LITERAL(17, 163, 5), // "char*"
QT_MOC_LITERAL(18, 169, 4), // "data"
QT_MOC_LITERAL(19, 174, 8), // "frameLen"
QT_MOC_LITERAL(20, 183, 20), // "on_serialMsgreceived"
QT_MOC_LITERAL(21, 204, 5), // "bytes"
QT_MOC_LITERAL(22, 210, 13) // "updateConnect"

    },
    "MainWindow\0sendAction\0\0QAction*\0action\0"
    "sendCardId\0tagID\0About\0ExportTable\0"
    "Login\0Connect\0Disconnect\0ExitApplication\0"
    "viewMainPage\0onOperationError\0msg\0"
    "onSendMessage\0char*\0data\0frameLen\0"
    "on_serialMsgreceived\0bytes\0updateConnect"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       5,    1,   82,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   85,    2, 0x08 /* Private */,
       8,    0,   86,    2, 0x08 /* Private */,
       9,    0,   87,    2, 0x08 /* Private */,
      10,    0,   88,    2, 0x08 /* Private */,
      11,    0,   89,    2, 0x08 /* Private */,
      12,    0,   90,    2, 0x08 /* Private */,
      13,    0,   91,    2, 0x08 /* Private */,
      14,    1,   92,    2, 0x08 /* Private */,
      16,    2,   95,    2, 0x08 /* Private */,
      20,    1,  100,    2, 0x08 /* Private */,
      22,    0,  103,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, 0x80000000 | 17, QMetaType::Int,   18,   19,
    QMetaType::Void, QMetaType::QByteArray,   21,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendAction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 1: _t->sendCardId((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->About(); break;
        case 3: _t->ExportTable(); break;
        case 4: _t->Login(); break;
        case 5: _t->Connect(); break;
        case 6: _t->Disconnect(); break;
        case 7: _t->ExitApplication(); break;
        case 8: _t->viewMainPage(); break;
        case 9: _t->onOperationError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->onSendMessage((*reinterpret_cast< char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->on_serialMsgreceived((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 12: _t->updateConnect(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MainWindow::*_t)(QAction * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sendAction)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sendCardId)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::sendAction(QAction * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::sendCardId(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
