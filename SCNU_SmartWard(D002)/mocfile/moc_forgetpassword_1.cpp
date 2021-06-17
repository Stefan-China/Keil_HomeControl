/****************************************************************************
** Meta object code from reading C++ file 'forgetpassword_1.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../LoginSystem/forgetpassword_1.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'forgetpassword_1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ForgetPassword_1_t {
    QByteArrayData data[15];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ForgetPassword_1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ForgetPassword_1_t qt_meta_stringdata_ForgetPassword_1 = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ForgetPassword_1"
QT_MOC_LITERAL(1, 17, 12), // "Toshow_login"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 14), // "check_phoneNum"
QT_MOC_LITERAL(4, 46, 6), // "Submit"
QT_MOC_LITERAL(5, 53, 15), // "Getcode_clicked"
QT_MOC_LITERAL(6, 69, 13), // "onResultReady"
QT_MOC_LITERAL(7, 83, 6), // "Value&"
QT_MOC_LITERAL(8, 90, 13), // "onResultError"
QT_MOC_LITERAL(9, 104, 7), // "onError"
QT_MOC_LITERAL(10, 112, 4), // "code"
QT_MOC_LITERAL(11, 117, 7), // "message"
QT_MOC_LITERAL(12, 125, 6), // "onSent"
QT_MOC_LITERAL(13, 132, 11), // "on_focusout"
QT_MOC_LITERAL(14, 144, 10) // "on_clicked"

    },
    "ForgetPassword_1\0Toshow_login\0\0"
    "check_phoneNum\0Submit\0Getcode_clicked\0"
    "onResultReady\0Value&\0onResultError\0"
    "onError\0code\0message\0onSent\0on_focusout\0"
    "on_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ForgetPassword_1[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   65,    2, 0x0a /* Public */,
       4,    0,   66,    2, 0x0a /* Public */,
       5,    0,   67,    2, 0x0a /* Public */,
       6,    2,   68,    2, 0x0a /* Public */,
       8,    4,   73,    2, 0x0a /* Public */,
       9,    2,   82,    2, 0x0a /* Public */,
      12,    1,   87,    2, 0x0a /* Public */,
      13,    0,   90,    2, 0x0a /* Public */,
      14,    0,   91,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, 0x80000000 | 7, QMetaType::Int,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   10,   11,
    QMetaType::Void, QMetaType::Long,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ForgetPassword_1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ForgetPassword_1 *_t = static_cast<ForgetPassword_1 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Toshow_login(); break;
        case 1: _t->check_phoneNum(); break;
        case 2: _t->Submit(); break;
        case 3: _t->Getcode_clicked(); break;
        case 4: _t->onResultReady((*reinterpret_cast< Value(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->onResultError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< Value(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 6: _t->onError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: _t->onSent((*reinterpret_cast< long(*)>(_a[1]))); break;
        case 8: _t->on_focusout(); break;
        case 9: _t->on_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ForgetPassword_1::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ForgetPassword_1::Toshow_login)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ForgetPassword_1::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ForgetPassword_1.data,
      qt_meta_data_ForgetPassword_1,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ForgetPassword_1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ForgetPassword_1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ForgetPassword_1.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ForgetPassword_1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void ForgetPassword_1::Toshow_login()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
