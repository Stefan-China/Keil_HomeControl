/****************************************************************************
** Meta object code from reading C++ file 'plugbutton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../oldproject/hnnk_standard/HNNK_UI/pri_0_homep/plugbutton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plugbutton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PlugButton_t {
    QByteArrayData data[10];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlugButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlugButton_t qt_meta_stringdata_PlugButton = {
    {
QT_MOC_LITERAL(0, 0, 10), // "PlugButton"
QT_MOC_LITERAL(1, 11, 16), // "signalPlugButton"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 10), // "devicetype"
QT_MOC_LITERAL(4, 40, 3), // "str"
QT_MOC_LITERAL(5, 44, 7), // "message"
QT_MOC_LITERAL(6, 52, 3), // "qos"
QT_MOC_LITERAL(7, 56, 6), // "retain"
QT_MOC_LITERAL(8, 63, 10), // "deleteItem"
QT_MOC_LITERAL(9, 74, 19) // "openedLightIncresed"

    },
    "PlugButton\0signalPlugButton\0\0devicetype\0"
    "str\0message\0qos\0retain\0deleteItem\0"
    "openedLightIncresed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlugButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    5,   39,    2, 0x06 /* Public */,
       1,    4,   50,    2, 0x26 /* Public | MethodCloned */,
       1,    3,   59,    2, 0x26 /* Public | MethodCloned */,
       8,    0,   66,    2, 0x06 /* Public */,
       9,    1,   67,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QByteArray, QMetaType::UChar, QMetaType::Bool,    3,    4,    5,    6,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QByteArray, QMetaType::UChar,    3,    4,    5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QByteArray,    3,    4,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void PlugButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PlugButton *_t = static_cast<PlugButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalPlugButton((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QByteArray(*)>(_a[3])),(*reinterpret_cast< quint8(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 1: _t->signalPlugButton((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QByteArray(*)>(_a[3])),(*reinterpret_cast< quint8(*)>(_a[4]))); break;
        case 2: _t->signalPlugButton((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QByteArray(*)>(_a[3]))); break;
        case 3: _t->deleteItem(); break;
        case 4: _t->openedLightIncresed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (PlugButton::*_t)(QString , QString , QByteArray , quint8 , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlugButton::signalPlugButton)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PlugButton::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlugButton::deleteItem)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (PlugButton::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlugButton::openedLightIncresed)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject PlugButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_PlugButton.data,
      qt_meta_data_PlugButton,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PlugButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlugButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlugButton.stringdata0))
        return static_cast<void*>(this);
    return QPushButton::qt_metacast(_clname);
}

int PlugButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void PlugButton::signalPlugButton(QString _t1, QString _t2, QByteArray _t3, quint8 _t4, bool _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 3
void PlugButton::deleteItem()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void PlugButton::openedLightIncresed(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
