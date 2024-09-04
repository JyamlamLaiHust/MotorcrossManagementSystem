/****************************************************************************
** Meta object code from reading C++ file 'querypage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CrossroadGradeManageSystem/pages/query/querypage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'querypage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QueryPage_t {
    QByteArrayData data[14];
    char stringdata0[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QueryPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QueryPage_t qt_meta_stringdata_QueryPage = {
    {
QT_MOC_LITERAL(0, 0, 9), // "QueryPage"
QT_MOC_LITERAL(1, 10, 16), // "on_tagIdReceived"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 5), // "tagId"
QT_MOC_LITERAL(4, 34, 24), // "on_btn_recognise_clicked"
QT_MOC_LITERAL(5, 59, 20), // "on_btn_Query_clicked"
QT_MOC_LITERAL(6, 80, 13), // "currentAction"
QT_MOC_LITERAL(7, 94, 8), // "QAction*"
QT_MOC_LITERAL(8, 103, 6), // "action"
QT_MOC_LITERAL(9, 110, 15), // "updateTableView"
QT_MOC_LITERAL(10, 126, 15), // "QSqlTableModel*"
QT_MOC_LITERAL(11, 142, 5), // "model"
QT_MOC_LITERAL(12, 148, 31), // "on_comboBox_currentIndexChanged"
QT_MOC_LITERAL(13, 180, 4) // "text"

    },
    "QueryPage\0on_tagIdReceived\0\0tagId\0"
    "on_btn_recognise_clicked\0on_btn_Query_clicked\0"
    "currentAction\0QAction*\0action\0"
    "updateTableView\0QSqlTableModel*\0model\0"
    "on_comboBox_currentIndexChanged\0text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QueryPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x08 /* Private */,
       4,    0,   47,    2, 0x08 /* Private */,
       5,    0,   48,    2, 0x08 /* Private */,
       6,    1,   49,    2, 0x08 /* Private */,
       9,    1,   52,    2, 0x08 /* Private */,
      12,    1,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::QString,   13,

       0        // eod
};

void QueryPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QueryPage *_t = static_cast<QueryPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_tagIdReceived((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_btn_recognise_clicked(); break;
        case 2: _t->on_btn_Query_clicked(); break;
        case 3: _t->currentAction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 4: _t->updateTableView((*reinterpret_cast< QSqlTableModel*(*)>(_a[1]))); break;
        case 5: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        }
    }
}

const QMetaObject QueryPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QueryPage.data,
      qt_meta_data_QueryPage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QueryPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QueryPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QueryPage.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QueryPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
