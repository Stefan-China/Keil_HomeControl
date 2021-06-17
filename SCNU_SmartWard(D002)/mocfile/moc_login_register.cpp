/****************************************************************************
** Meta object code from reading C++ file 'login_register.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../LoginSystem/login_register.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'login_register.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Login_Register_t {
    QByteArrayData data[21];
    char stringdata0[211];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Login_Register_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Login_Register_t qt_meta_stringdata_Login_Register = {
    {
QT_MOC_LITERAL(0, 0, 14), // "Login_Register"
QT_MOC_LITERAL(1, 15, 15), // "GoToOfficialWeb"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 7), // "Be_Mini"
QT_MOC_LITERAL(4, 40, 8), // "Be_Close"
QT_MOC_LITERAL(5, 49, 5), // "Login"
QT_MOC_LITERAL(6, 55, 7), // "ReLogin"
QT_MOC_LITERAL(7, 63, 8), // "ReLogin1"
QT_MOC_LITERAL(8, 72, 18), // "Delete_HoverWindow"
QT_MOC_LITERAL(9, 91, 13), // "onResultReady"
QT_MOC_LITERAL(10, 105, 6), // "Value&"
QT_MOC_LITERAL(11, 112, 13), // "onResultError"
QT_MOC_LITERAL(12, 126, 7), // "onError"
QT_MOC_LITERAL(13, 134, 4), // "code"
QT_MOC_LITERAL(14, 139, 7), // "message"
QT_MOC_LITERAL(15, 147, 6), // "onSent"
QT_MOC_LITERAL(16, 154, 14), // "remove_account"
QT_MOC_LITERAL(17, 169, 7), // "account"
QT_MOC_LITERAL(18, 177, 10), // "on_clicked"
QT_MOC_LITERAL(19, 188, 10), // "on_focusin"
QT_MOC_LITERAL(20, 199, 11) // "on_focusout"

    },
    "Login_Register\0GoToOfficialWeb\0\0Be_Mini\0"
    "Be_Close\0Login\0ReLogin\0ReLogin1\0"
    "Delete_HoverWindow\0onResultReady\0"
    "Value&\0onResultError\0onError\0code\0"
    "message\0onSent\0remove_account\0account\0"
    "on_clicked\0on_focusin\0on_focusout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Login_Register[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x09 /* Protected */,
       3,    0,   90,    2, 0x09 /* Protected */,
       4,    0,   91,    2, 0x09 /* Protected */,
       5,    0,   92,    2, 0x09 /* Protected */,
       6,    0,   93,    2, 0x09 /* Protected */,
       7,    0,   94,    2, 0x09 /* Protected */,
       8,    0,   95,    2, 0x09 /* Protected */,
       9,    2,   96,    2, 0x09 /* Protected */,
      11,    4,  101,    2, 0x09 /* Protected */,
      12,    2,  110,    2, 0x09 /* Protected */,
      15,    1,  115,    2, 0x09 /* Protected */,
      16,    1,  118,    2, 0x09 /* Protected */,
      18,    0,  121,    2, 0x09 /* Protected */,
      19,    0,  122,    2, 0x09 /* Protected */,
      20,    0,  123,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, 0x80000000 | 10, QMetaType::Int,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   13,   14,
    QMetaType::Void, QMetaType::Long,    2,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Login_Register::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Login_Register *_t = static_cast<Login_Register *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->GoToOfficialWeb(); break;
        case 1: _t->Be_Mini(); break;
        case 2: _t->Be_Close(); break;
        case 3: _t->Login(); break;
        case 4: _t->ReLogin(); break;
        case 5: _t->ReLogin1(); break;
        case 6: _t->Delete_HoverWindow(); break;
        case 7: _t->onResultReady((*reinterpret_cast< Value(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->onResultError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< Value(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 9: _t->onError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 10: _t->onSent((*reinterpret_cast< long(*)>(_a[1]))); break;
        case 11: _t->remove_account((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->on_clicked(); break;
        case 13: _t->on_focusin(); break;
        case 14: _t->on_focusout(); break;
        default: ;
        }
    }
}

const QMetaObject Login_Register::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Login_Register.data,
      qt_meta_data_Login_Register,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Login_Register::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Login_Register::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Login_Register.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Login_Register::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
