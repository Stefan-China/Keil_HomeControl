/****************************************************************************
** Meta object code from reading C++ file 'plug.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../oldproject/hnnk_standard/HNNK_UI/pri_0_homep/plug.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plug.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OpenAllButton_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpenAllButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpenAllButton_t qt_meta_stringdata_OpenAllButton = {
    {
QT_MOC_LITERAL(0, 0, 13) // "OpenAllButton"

    },
    "OpenAllButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpenAllButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void OpenAllButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject OpenAllButton::staticMetaObject = {
    { &SelectableButton::staticMetaObject, qt_meta_stringdata_OpenAllButton.data,
      qt_meta_data_OpenAllButton,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *OpenAllButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpenAllButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OpenAllButton.stringdata0))
        return static_cast<void*>(this);
    return SelectableButton::qt_metacast(_clname);
}

int OpenAllButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SelectableButton::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AddButton_t {
    QByteArrayData data[1];
    char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddButton_t qt_meta_stringdata_AddButton = {
    {
QT_MOC_LITERAL(0, 0, 9) // "AddButton"

    },
    "AddButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void AddButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject AddButton::staticMetaObject = {
    { &FlashButton::staticMetaObject, qt_meta_stringdata_AddButton.data,
      qt_meta_data_AddButton,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AddButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AddButton.stringdata0))
        return static_cast<void*>(this);
    return FlashButton::qt_metacast(_clname);
}

int AddButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FlashButton::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Plug_t {
    QByteArrayData data[10];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Plug_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Plug_t qt_meta_stringdata_Plug = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Plug"
QT_MOC_LITERAL(1, 5, 12), // "addLightPlug"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 10), // "devicetype"
QT_MOC_LITERAL(4, 30, 14), // "onNameFinished"
QT_MOC_LITERAL(5, 45, 6), // "maxNum"
QT_MOC_LITERAL(6, 52, 7), // "numbers"
QT_MOC_LITERAL(7, 60, 8), // "QString*"
QT_MOC_LITERAL(8, 69, 15), // "onGetDeviceInfo"
QT_MOC_LITERAL(9, 85, 8) // "deviceid"

    },
    "Plug\0addLightPlug\0\0devicetype\0"
    "onNameFinished\0maxNum\0numbers\0QString*\0"
    "onGetDeviceInfo\0deviceid"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Plug[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    3,   32,    2, 0x08 /* Private */,
       8,    3,   39,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 7,    5,    6,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Int,    9,    3,    6,

       0        // eod
};

void Plug::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Plug *_t = static_cast<Plug *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addLightPlug((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->onNameFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString*(*)>(_a[3]))); break;
        case 2: _t->onGetDeviceInfo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Plug::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Plug::addLightPlug)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Plug::staticMetaObject = {
    { &BaseWidget::staticMetaObject, qt_meta_stringdata_Plug.data,
      qt_meta_data_Plug,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Plug::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Plug::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Plug.stringdata0))
        return static_cast<void*>(this);
    return BaseWidget::qt_metacast(_clname);
}

int Plug::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Plug::addLightPlug(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
