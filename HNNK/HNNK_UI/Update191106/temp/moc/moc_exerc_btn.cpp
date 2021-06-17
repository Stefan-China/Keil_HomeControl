/****************************************************************************
** Meta object code from reading C++ file 'exerc_btn.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../oldproject/hnnk_standard/HNNK_UI/pri_2_exerc/exerc_btn.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'exerc_btn.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_exerc_btn_t {
    QByteArrayData data[4];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_exerc_btn_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_exerc_btn_t qt_meta_stringdata_exerc_btn = {
    {
QT_MOC_LITERAL(0, 0, 9), // "exerc_btn"
QT_MOC_LITERAL(1, 10, 16), // "signal_set_state"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 5) // "index"

    },
    "exerc_btn\0signal_set_state\0\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_exerc_btn[] = {

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
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void exerc_btn::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        exerc_btn *_t = static_cast<exerc_btn *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal_set_state((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (exerc_btn::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&exerc_btn::signal_set_state)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject exerc_btn::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_exerc_btn.data,
      qt_meta_data_exerc_btn,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *exerc_btn::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *exerc_btn::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_exerc_btn.stringdata0))
        return static_cast<void*>(this);
    return QPushButton::qt_metacast(_clname);
}

int exerc_btn::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void exerc_btn::signal_set_state(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_btn_play_t {
    QByteArrayData data[1];
    char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_btn_play_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_btn_play_t qt_meta_stringdata_btn_play = {
    {
QT_MOC_LITERAL(0, 0, 8) // "btn_play"

    },
    "btn_play"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_btn_play[] = {

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

void btn_play::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject btn_play::staticMetaObject = {
    { &exerc_btn::staticMetaObject, qt_meta_stringdata_btn_play.data,
      qt_meta_data_btn_play,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *btn_play::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *btn_play::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_btn_play.stringdata0))
        return static_cast<void*>(this);
    return exerc_btn::qt_metacast(_clname);
}

int btn_play::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = exerc_btn::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_btn_back_t {
    QByteArrayData data[1];
    char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_btn_back_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_btn_back_t qt_meta_stringdata_btn_back = {
    {
QT_MOC_LITERAL(0, 0, 8) // "btn_back"

    },
    "btn_back"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_btn_back[] = {

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

void btn_back::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject btn_back::staticMetaObject = {
    { &exerc_btn::staticMetaObject, qt_meta_stringdata_btn_back.data,
      qt_meta_data_btn_back,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *btn_back::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *btn_back::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_btn_back.stringdata0))
        return static_cast<void*>(this);
    return exerc_btn::qt_metacast(_clname);
}

int btn_back::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = exerc_btn::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_btn_fore_t {
    QByteArrayData data[1];
    char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_btn_fore_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_btn_fore_t qt_meta_stringdata_btn_fore = {
    {
QT_MOC_LITERAL(0, 0, 8) // "btn_fore"

    },
    "btn_fore"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_btn_fore[] = {

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

void btn_fore::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject btn_fore::staticMetaObject = {
    { &exerc_btn::staticMetaObject, qt_meta_stringdata_btn_fore.data,
      qt_meta_data_btn_fore,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *btn_fore::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *btn_fore::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_btn_fore.stringdata0))
        return static_cast<void*>(this);
    return exerc_btn::qt_metacast(_clname);
}

int btn_fore::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = exerc_btn::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_btn_down_t {
    QByteArrayData data[1];
    char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_btn_down_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_btn_down_t qt_meta_stringdata_btn_down = {
    {
QT_MOC_LITERAL(0, 0, 8) // "btn_down"

    },
    "btn_down"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_btn_down[] = {

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

void btn_down::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject btn_down::staticMetaObject = {
    { &exerc_btn::staticMetaObject, qt_meta_stringdata_btn_down.data,
      qt_meta_data_btn_down,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *btn_down::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *btn_down::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_btn_down.stringdata0))
        return static_cast<void*>(this);
    return exerc_btn::qt_metacast(_clname);
}

int btn_down::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = exerc_btn::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_btn_up_t {
    QByteArrayData data[1];
    char stringdata0[7];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_btn_up_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_btn_up_t qt_meta_stringdata_btn_up = {
    {
QT_MOC_LITERAL(0, 0, 6) // "btn_up"

    },
    "btn_up"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_btn_up[] = {

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

void btn_up::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject btn_up::staticMetaObject = {
    { &exerc_btn::staticMetaObject, qt_meta_stringdata_btn_up.data,
      qt_meta_data_btn_up,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *btn_up::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *btn_up::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_btn_up.stringdata0))
        return static_cast<void*>(this);
    return exerc_btn::qt_metacast(_clname);
}

int btn_up::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = exerc_btn::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_btn_exit_t {
    QByteArrayData data[1];
    char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_btn_exit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_btn_exit_t qt_meta_stringdata_btn_exit = {
    {
QT_MOC_LITERAL(0, 0, 8) // "btn_exit"

    },
    "btn_exit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_btn_exit[] = {

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

void btn_exit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject btn_exit::staticMetaObject = {
    { &exerc_btn::staticMetaObject, qt_meta_stringdata_btn_exit.data,
      qt_meta_data_btn_exit,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *btn_exit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *btn_exit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_btn_exit.stringdata0))
        return static_cast<void*>(this);
    return exerc_btn::qt_metacast(_clname);
}

int btn_exit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = exerc_btn::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_game_btn_t {
    QByteArrayData data[1];
    char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_game_btn_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_game_btn_t qt_meta_stringdata_game_btn = {
    {
QT_MOC_LITERAL(0, 0, 8) // "game_btn"

    },
    "game_btn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_game_btn[] = {

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

void game_btn::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject game_btn::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_game_btn.data,
      qt_meta_data_game_btn,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *game_btn::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *game_btn::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_game_btn.stringdata0))
        return static_cast<void*>(this);
    return QPushButton::qt_metacast(_clname);
}

int game_btn::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_game_btn_web_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_game_btn_web_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_game_btn_web_t qt_meta_stringdata_game_btn_web = {
    {
QT_MOC_LITERAL(0, 0, 12) // "game_btn_web"

    },
    "game_btn_web"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_game_btn_web[] = {

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

void game_btn_web::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject game_btn_web::staticMetaObject = {
    { &game_btn::staticMetaObject, qt_meta_stringdata_game_btn_web.data,
      qt_meta_data_game_btn_web,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *game_btn_web::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *game_btn_web::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_game_btn_web.stringdata0))
        return static_cast<void*>(this);
    return game_btn::qt_metacast(_clname);
}

int game_btn_web::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = game_btn::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_game_btn_exerc_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_game_btn_exerc_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_game_btn_exerc_t qt_meta_stringdata_game_btn_exerc = {
    {
QT_MOC_LITERAL(0, 0, 14) // "game_btn_exerc"

    },
    "game_btn_exerc"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_game_btn_exerc[] = {

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

void game_btn_exerc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject game_btn_exerc::staticMetaObject = {
    { &game_btn::staticMetaObject, qt_meta_stringdata_game_btn_exerc.data,
      qt_meta_data_game_btn_exerc,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *game_btn_exerc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *game_btn_exerc::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_game_btn_exerc.stringdata0))
        return static_cast<void*>(this);
    return game_btn::qt_metacast(_clname);
}

int game_btn_exerc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = game_btn::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_game_btn_llk_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_game_btn_llk_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_game_btn_llk_t qt_meta_stringdata_game_btn_llk = {
    {
QT_MOC_LITERAL(0, 0, 12) // "game_btn_llk"

    },
    "game_btn_llk"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_game_btn_llk[] = {

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

void game_btn_llk::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject game_btn_llk::staticMetaObject = {
    { &game_btn::staticMetaObject, qt_meta_stringdata_game_btn_llk.data,
      qt_meta_data_game_btn_llk,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *game_btn_llk::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *game_btn_llk::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_game_btn_llk.stringdata0))
        return static_cast<void*>(this);
    return game_btn::qt_metacast(_clname);
}

int game_btn_llk::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = game_btn::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_game_btn_bird_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_game_btn_bird_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_game_btn_bird_t qt_meta_stringdata_game_btn_bird = {
    {
QT_MOC_LITERAL(0, 0, 13) // "game_btn_bird"

    },
    "game_btn_bird"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_game_btn_bird[] = {

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

void game_btn_bird::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject game_btn_bird::staticMetaObject = {
    { &game_btn::staticMetaObject, qt_meta_stringdata_game_btn_bird.data,
      qt_meta_data_game_btn_bird,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *game_btn_bird::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *game_btn_bird::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_game_btn_bird.stringdata0))
        return static_cast<void*>(this);
    return game_btn::qt_metacast(_clname);
}

int game_btn_bird::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = game_btn::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
