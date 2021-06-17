/****************************************************************************
** Meta object code from reading C++ file 'mybutton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../oldproject/hnnk_standard/HNNK_UI/pri_0_homep/mybutton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mybutton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SelectableButton_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SelectableButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SelectableButton_t qt_meta_stringdata_SelectableButton = {
    {
QT_MOC_LITERAL(0, 0, 16) // "SelectableButton"

    },
    "SelectableButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SelectableButton[] = {

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

void SelectableButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject SelectableButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_SelectableButton.data,
      qt_meta_data_SelectableButton,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SelectableButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SelectableButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SelectableButton.stringdata0))
        return static_cast<void*>(this);
    return QPushButton::qt_metacast(_clname);
}

int SelectableButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FlashButton_t {
    QByteArrayData data[3];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FlashButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FlashButton_t qt_meta_stringdata_FlashButton = {
    {
QT_MOC_LITERAL(0, 0, 11), // "FlashButton"
QT_MOC_LITERAL(1, 12, 10), // "newClicked"
QT_MOC_LITERAL(2, 23, 0) // ""

    },
    "FlashButton\0newClicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FlashButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void FlashButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FlashButton *_t = static_cast<FlashButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (FlashButton::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlashButton::newClicked)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject FlashButton::staticMetaObject = {
    { &SelectableButton::staticMetaObject, qt_meta_stringdata_FlashButton.data,
      qt_meta_data_FlashButton,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *FlashButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlashButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FlashButton.stringdata0))
        return static_cast<void*>(this);
    return SelectableButton::qt_metacast(_clname);
}

int FlashButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SelectableButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void FlashButton::newClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_BedButton_t {
    QByteArrayData data[5];
    char stringdata0[44];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BedButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BedButton_t qt_meta_stringdata_BedButton = {
    {
QT_MOC_LITERAL(0, 0, 9), // "BedButton"
QT_MOC_LITERAL(1, 10, 10), // "newClicked"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 15), // "NursingBedState"
QT_MOC_LITERAL(4, 38, 5) // "state"

    },
    "BedButton\0newClicked\0\0NursingBedState\0"
    "state"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BedButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void BedButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BedButton *_t = static_cast<BedButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newClicked((*reinterpret_cast< NursingBedState(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (BedButton::*_t)(NursingBedState );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BedButton::newClicked)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject BedButton::staticMetaObject = {
    { &SelectableButton::staticMetaObject, qt_meta_stringdata_BedButton.data,
      qt_meta_data_BedButton,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BedButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BedButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BedButton.stringdata0))
        return static_cast<void*>(this);
    return SelectableButton::qt_metacast(_clname);
}

int BedButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SelectableButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void BedButton::newClicked(NursingBedState _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_HomePageButton_t {
    QByteArrayData data[5];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HomePageButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HomePageButton_t qt_meta_stringdata_HomePageButton = {
    {
QT_MOC_LITERAL(0, 0, 14), // "HomePageButton"
QT_MOC_LITERAL(1, 15, 10), // "newClicked"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 10), // "DeviceType"
QT_MOC_LITERAL(4, 38, 12) // "deleteDevice"

    },
    "HomePageButton\0newClicked\0\0DeviceType\0"
    "deleteDevice"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HomePageButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,

       0        // eod
};

void HomePageButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HomePageButton *_t = static_cast<HomePageButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newClicked((*reinterpret_cast< DeviceType(*)>(_a[1]))); break;
        case 1: _t->deleteDevice((*reinterpret_cast< DeviceType(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (HomePageButton::*_t)(DeviceType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HomePageButton::newClicked)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (HomePageButton::*_t)(DeviceType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HomePageButton::deleteDevice)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject HomePageButton::staticMetaObject = {
    { &SelectableButton::staticMetaObject, qt_meta_stringdata_HomePageButton.data,
      qt_meta_data_HomePageButton,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *HomePageButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HomePageButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HomePageButton.stringdata0))
        return static_cast<void*>(this);
    return SelectableButton::qt_metacast(_clname);
}

int HomePageButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SelectableButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void HomePageButton::newClicked(DeviceType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void HomePageButton::deleteDevice(DeviceType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_DeviceButton_t {
    QByteArrayData data[7];
    char stringdata0[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DeviceButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DeviceButton_t qt_meta_stringdata_DeviceButton = {
    {
QT_MOC_LITERAL(0, 0, 12), // "DeviceButton"
QT_MOC_LITERAL(1, 13, 10), // "newClicked"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 10), // "DeviceType"
QT_MOC_LITERAL(4, 36, 4), // "type"
QT_MOC_LITERAL(5, 41, 8), // "deviceid"
QT_MOC_LITERAL(6, 50, 12) // "deleteDevice"

    },
    "DeviceButton\0newClicked\0\0DeviceType\0"
    "type\0deviceid\0deleteDevice"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DeviceButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,
       6,    1,   29,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void, 0x80000000 | 3,    2,

       0        // eod
};

void DeviceButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DeviceButton *_t = static_cast<DeviceButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newClicked((*reinterpret_cast< DeviceType(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->deleteDevice((*reinterpret_cast< DeviceType(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (DeviceButton::*_t)(DeviceType , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceButton::newClicked)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DeviceButton::*_t)(DeviceType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceButton::deleteDevice)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject DeviceButton::staticMetaObject = {
    { &FlashButton::staticMetaObject, qt_meta_stringdata_DeviceButton.data,
      qt_meta_data_DeviceButton,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DeviceButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeviceButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DeviceButton.stringdata0))
        return static_cast<void*>(this);
    return FlashButton::qt_metacast(_clname);
}

int DeviceButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FlashButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void DeviceButton::newClicked(DeviceType _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DeviceButton::deleteDevice(DeviceType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_ReturnButton_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ReturnButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ReturnButton_t qt_meta_stringdata_ReturnButton = {
    {
QT_MOC_LITERAL(0, 0, 12) // "ReturnButton"

    },
    "ReturnButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReturnButton[] = {

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

void ReturnButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject ReturnButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_ReturnButton.data,
      qt_meta_data_ReturnButton,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ReturnButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReturnButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ReturnButton.stringdata0))
        return static_cast<void*>(this);
    return QPushButton::qt_metacast(_clname);
}

int ReturnButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_TvButton_t {
    QByteArrayData data[4];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TvButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TvButton_t qt_meta_stringdata_TvButton = {
    {
QT_MOC_LITERAL(0, 0, 8), // "TvButton"
QT_MOC_LITERAL(1, 9, 10), // "newClicked"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 10) // "TVFunction"

    },
    "TvButton\0newClicked\0\0TVFunction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TvButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

       0        // eod
};

void TvButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TvButton *_t = static_cast<TvButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newClicked((*reinterpret_cast< TVFunction(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (TvButton::*_t)(TVFunction );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TvButton::newClicked)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject TvButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_TvButton.data,
      qt_meta_data_TvButton,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TvButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TvButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TvButton.stringdata0))
        return static_cast<void*>(this);
    return QPushButton::qt_metacast(_clname);
}

int TvButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void TvButton::newClicked(TVFunction _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_TvConfirmButton_t {
    QByteArrayData data[4];
    char stringdata0[39];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TvConfirmButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TvConfirmButton_t qt_meta_stringdata_TvConfirmButton = {
    {
QT_MOC_LITERAL(0, 0, 15), // "TvConfirmButton"
QT_MOC_LITERAL(1, 16, 10), // "newClicked"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 10) // "TVFunction"

    },
    "TvConfirmButton\0newClicked\0\0TVFunction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TvConfirmButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

       0        // eod
};

void TvConfirmButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TvConfirmButton *_t = static_cast<TvConfirmButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newClicked((*reinterpret_cast< TVFunction(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (TvConfirmButton::*_t)(TVFunction );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TvConfirmButton::newClicked)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject TvConfirmButton::staticMetaObject = {
    { &FlashButton::staticMetaObject, qt_meta_stringdata_TvConfirmButton.data,
      qt_meta_data_TvConfirmButton,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TvConfirmButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TvConfirmButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TvConfirmButton.stringdata0))
        return static_cast<void*>(this);
    return FlashButton::qt_metacast(_clname);
}

int TvConfirmButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FlashButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void TvConfirmButton::newClicked(TVFunction _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_TvDataButton_t {
    QByteArrayData data[3];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TvDataButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TvDataButton_t qt_meta_stringdata_TvDataButton = {
    {
QT_MOC_LITERAL(0, 0, 12), // "TvDataButton"
QT_MOC_LITERAL(1, 13, 10), // "newClicked"
QT_MOC_LITERAL(2, 24, 0) // ""

    },
    "TvDataButton\0newClicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TvDataButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void TvDataButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TvDataButton *_t = static_cast<TvDataButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (TvDataButton::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TvDataButton::newClicked)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject TvDataButton::staticMetaObject = {
    { &FlashButton::staticMetaObject, qt_meta_stringdata_TvDataButton.data,
      qt_meta_data_TvDataButton,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TvDataButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TvDataButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TvDataButton.stringdata0))
        return static_cast<void*>(this);
    return FlashButton::qt_metacast(_clname);
}

int TvDataButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FlashButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void TvDataButton::newClicked(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_TvFlashButton_t {
    QByteArrayData data[4];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TvFlashButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TvFlashButton_t qt_meta_stringdata_TvFlashButton = {
    {
QT_MOC_LITERAL(0, 0, 13), // "TvFlashButton"
QT_MOC_LITERAL(1, 14, 10), // "newClicked"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 10) // "TVFunction"

    },
    "TvFlashButton\0newClicked\0\0TVFunction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TvFlashButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

       0        // eod
};

void TvFlashButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TvFlashButton *_t = static_cast<TvFlashButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newClicked((*reinterpret_cast< TVFunction(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (TvFlashButton::*_t)(TVFunction );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TvFlashButton::newClicked)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject TvFlashButton::staticMetaObject = {
    { &FlashButton::staticMetaObject, qt_meta_stringdata_TvFlashButton.data,
      qt_meta_data_TvFlashButton,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TvFlashButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TvFlashButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TvFlashButton.stringdata0))
        return static_cast<void*>(this);
    return FlashButton::qt_metacast(_clname);
}

int TvFlashButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FlashButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void TvFlashButton::newClicked(TVFunction _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
