/****************************************************************************
** Meta object code from reading C++ file 'signup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../pages/signup/signup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'signup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SignUp_t {
    QByteArrayData data[11];
    char stringdata0[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SignUp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SignUp_t qt_meta_stringdata_SignUp = {
    {
QT_MOC_LITERAL(0, 0, 6), // "SignUp"
QT_MOC_LITERAL(1, 7, 19), // "on_btn_Time_clicked"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 22), // "on_btn_refresh_clicked"
QT_MOC_LITERAL(4, 51, 20), // "on_btn_reset_clicked"
QT_MOC_LITERAL(5, 72, 24), // "on_btn_recognize_clicked"
QT_MOC_LITERAL(6, 97, 17), // "updateCurrentTime"
QT_MOC_LITERAL(7, 115, 16), // "on_tagIdReceived"
QT_MOC_LITERAL(8, 132, 5), // "tagId"
QT_MOC_LITERAL(9, 138, 18), // "onEventNameChanged"
QT_MOC_LITERAL(10, 157, 9) // "eventName"

    },
    "SignUp\0on_btn_Time_clicked\0\0"
    "on_btn_refresh_clicked\0on_btn_reset_clicked\0"
    "on_btn_recognize_clicked\0updateCurrentTime\0"
    "on_tagIdReceived\0tagId\0onEventNameChanged\0"
    "eventName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SignUp[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    1,   54,    2, 0x08 /* Private */,
       9,    1,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,   10,

       0        // eod
};

void SignUp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SignUp *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btn_Time_clicked(); break;
        case 1: _t->on_btn_refresh_clicked(); break;
        case 2: _t->on_btn_reset_clicked(); break;
        case 3: _t->on_btn_recognize_clicked(); break;
        case 4: _t->updateCurrentTime(); break;
        case 5: _t->on_tagIdReceived((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->onEventNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SignUp::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_SignUp.data,
    qt_meta_data_SignUp,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SignUp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SignUp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SignUp.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SignUp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
