/****************************************************************************
** Meta object code from reading C++ file 'main_btn.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../oldproject/hnnk_standard/main_btn.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_btn.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_main_Btn_noa_t {
    QByteArrayData data[5];
    char stringdata0[56];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_main_Btn_noa_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_main_Btn_noa_t qt_meta_stringdata_main_Btn_noa = {
    {
QT_MOC_LITERAL(0, 0, 12), // "main_Btn_noa"
QT_MOC_LITERAL(1, 13, 18), // "signal_set_UI_page"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 5), // "index"
QT_MOC_LITERAL(4, 39, 16) // "slot_set_UI_page"

    },
    "main_Btn_noa\0signal_set_UI_page\0\0index\0"
    "slot_set_UI_page"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_main_Btn_noa[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void main_Btn_noa::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        main_Btn_noa *_t = static_cast<main_Btn_noa *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal_set_UI_page((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->slot_set_UI_page((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (main_Btn_noa::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&main_Btn_noa::signal_set_UI_page)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject main_Btn_noa::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_main_Btn_noa.data,
      qt_meta_data_main_Btn_noa,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *main_Btn_noa::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *main_Btn_noa::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_main_Btn_noa.stringdata0))
        return static_cast<void*>(this);
    return QPushButton::qt_metacast(_clname);
}

int main_Btn_noa::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
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
void main_Btn_noa::signal_set_UI_page(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_homep_Btn_noa_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_homep_Btn_noa_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_homep_Btn_noa_t qt_meta_stringdata_homep_Btn_noa = {
    {
QT_MOC_LITERAL(0, 0, 13) // "homep_Btn_noa"

    },
    "homep_Btn_noa"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_homep_Btn_noa[] = {

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

void homep_Btn_noa::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject homep_Btn_noa::staticMetaObject = {
    { &main_Btn_noa::staticMetaObject, qt_meta_stringdata_homep_Btn_noa.data,
      qt_meta_data_homep_Btn_noa,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *homep_Btn_noa::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *homep_Btn_noa::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_homep_Btn_noa.stringdata0))
        return static_cast<void*>(this);
    return main_Btn_noa::qt_metacast(_clname);
}

int homep_Btn_noa::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = main_Btn_noa::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_align_Btn_noa_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_align_Btn_noa_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_align_Btn_noa_t qt_meta_stringdata_align_Btn_noa = {
    {
QT_MOC_LITERAL(0, 0, 13) // "align_Btn_noa"

    },
    "align_Btn_noa"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_align_Btn_noa[] = {

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

void align_Btn_noa::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject align_Btn_noa::staticMetaObject = {
    { &main_Btn_noa::staticMetaObject, qt_meta_stringdata_align_Btn_noa.data,
      qt_meta_data_align_Btn_noa,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *align_Btn_noa::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *align_Btn_noa::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_align_Btn_noa.stringdata0))
        return static_cast<void*>(this);
    return main_Btn_noa::qt_metacast(_clname);
}

int align_Btn_noa::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = main_Btn_noa::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_attention_Btn_noa_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_attention_Btn_noa_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_attention_Btn_noa_t qt_meta_stringdata_attention_Btn_noa = {
    {
QT_MOC_LITERAL(0, 0, 17) // "attention_Btn_noa"

    },
    "attention_Btn_noa"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_attention_Btn_noa[] = {

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

void attention_Btn_noa::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject attention_Btn_noa::staticMetaObject = {
    { &main_Btn_noa::staticMetaObject, qt_meta_stringdata_attention_Btn_noa.data,
      qt_meta_data_attention_Btn_noa,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *attention_Btn_noa::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *attention_Btn_noa::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_attention_Btn_noa.stringdata0))
        return static_cast<void*>(this);
    return main_Btn_noa::qt_metacast(_clname);
}

int attention_Btn_noa::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = main_Btn_noa::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_smarthome_Btn_noa_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_smarthome_Btn_noa_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_smarthome_Btn_noa_t qt_meta_stringdata_smarthome_Btn_noa = {
    {
QT_MOC_LITERAL(0, 0, 17) // "smarthome_Btn_noa"

    },
    "smarthome_Btn_noa"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_smarthome_Btn_noa[] = {

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

void smarthome_Btn_noa::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject smarthome_Btn_noa::staticMetaObject = {
    { &main_Btn_noa::staticMetaObject, qt_meta_stringdata_smarthome_Btn_noa.data,
      qt_meta_data_smarthome_Btn_noa,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *smarthome_Btn_noa::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *smarthome_Btn_noa::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_smarthome_Btn_noa.stringdata0))
        return static_cast<void*>(this);
    return main_Btn_noa::qt_metacast(_clname);
}

int smarthome_Btn_noa::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = main_Btn_noa::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_person_Btn_noa_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_person_Btn_noa_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_person_Btn_noa_t qt_meta_stringdata_person_Btn_noa = {
    {
QT_MOC_LITERAL(0, 0, 14) // "person_Btn_noa"

    },
    "person_Btn_noa"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_person_Btn_noa[] = {

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

void person_Btn_noa::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject person_Btn_noa::staticMetaObject = {
    { &main_Btn_noa::staticMetaObject, qt_meta_stringdata_person_Btn_noa.data,
      qt_meta_data_person_Btn_noa,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *person_Btn_noa::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *person_Btn_noa::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_person_Btn_noa.stringdata0))
        return static_cast<void*>(this);
    return main_Btn_noa::qt_metacast(_clname);
}

int person_Btn_noa::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = main_Btn_noa::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_medical_Btn_noa_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_medical_Btn_noa_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_medical_Btn_noa_t qt_meta_stringdata_medical_Btn_noa = {
    {
QT_MOC_LITERAL(0, 0, 15) // "medical_Btn_noa"

    },
    "medical_Btn_noa"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_medical_Btn_noa[] = {

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

void medical_Btn_noa::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject medical_Btn_noa::staticMetaObject = {
    { &main_Btn_noa::staticMetaObject, qt_meta_stringdata_medical_Btn_noa.data,
      qt_meta_data_medical_Btn_noa,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *medical_Btn_noa::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *medical_Btn_noa::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_medical_Btn_noa.stringdata0))
        return static_cast<void*>(this);
    return main_Btn_noa::qt_metacast(_clname);
}

int medical_Btn_noa::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = main_Btn_noa::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_call_Btn_noa_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_call_Btn_noa_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_call_Btn_noa_t qt_meta_stringdata_call_Btn_noa = {
    {
QT_MOC_LITERAL(0, 0, 12) // "call_Btn_noa"

    },
    "call_Btn_noa"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_call_Btn_noa[] = {

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

void call_Btn_noa::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject call_Btn_noa::staticMetaObject = {
    { &main_Btn_noa::staticMetaObject, qt_meta_stringdata_call_Btn_noa.data,
      qt_meta_data_call_Btn_noa,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *call_Btn_noa::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *call_Btn_noa::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_call_Btn_noa.stringdata0))
        return static_cast<void*>(this);
    return main_Btn_noa::qt_metacast(_clname);
}

int call_Btn_noa::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = main_Btn_noa::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_wid_title_t {
    QByteArrayData data[3];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_wid_title_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_wid_title_t qt_meta_stringdata_wid_title = {
    {
QT_MOC_LITERAL(0, 0, 9), // "wid_title"
QT_MOC_LITERAL(1, 10, 17), // "signal_window_pos"
QT_MOC_LITERAL(2, 28, 0) // ""

    },
    "wid_title\0signal_window_pos\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_wid_title[] = {

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
    QMetaType::Void, QMetaType::QPoint,    2,

       0        // eod
};

void wid_title::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        wid_title *_t = static_cast<wid_title *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal_window_pos((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (wid_title::*_t)(QPoint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&wid_title::signal_window_pos)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject wid_title::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_wid_title.data,
      qt_meta_data_wid_title,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *wid_title::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *wid_title::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_wid_title.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int wid_title::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void wid_title::signal_window_pos(QPoint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_qla_logo_t {
    QByteArrayData data[1];
    char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qla_logo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qla_logo_t qt_meta_stringdata_qla_logo = {
    {
QT_MOC_LITERAL(0, 0, 8) // "qla_logo"

    },
    "qla_logo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qla_logo[] = {

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

void qla_logo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject qla_logo::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_qla_logo.data,
      qt_meta_data_qla_logo,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qla_logo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qla_logo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qla_logo.stringdata0))
        return static_cast<void*>(this);
    return QLabel::qt_metacast(_clname);
}

int qla_logo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Btn_shortcut_ZYJZ_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Btn_shortcut_ZYJZ_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Btn_shortcut_ZYJZ_t qt_meta_stringdata_Btn_shortcut_ZYJZ = {
    {
QT_MOC_LITERAL(0, 0, 17) // "Btn_shortcut_ZYJZ"

    },
    "Btn_shortcut_ZYJZ"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Btn_shortcut_ZYJZ[] = {

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

void Btn_shortcut_ZYJZ::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject Btn_shortcut_ZYJZ::staticMetaObject = {
    { &main_Btn_noa::staticMetaObject, qt_meta_stringdata_Btn_shortcut_ZYJZ.data,
      qt_meta_data_Btn_shortcut_ZYJZ,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Btn_shortcut_ZYJZ::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Btn_shortcut_ZYJZ::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Btn_shortcut_ZYJZ.stringdata0))
        return static_cast<void*>(this);
    return main_Btn_noa::qt_metacast(_clname);
}

int Btn_shortcut_ZYJZ::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = main_Btn_noa::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Btn_shortcut_GRZX_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Btn_shortcut_GRZX_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Btn_shortcut_GRZX_t qt_meta_stringdata_Btn_shortcut_GRZX = {
    {
QT_MOC_LITERAL(0, 0, 17) // "Btn_shortcut_GRZX"

    },
    "Btn_shortcut_GRZX"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Btn_shortcut_GRZX[] = {

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

void Btn_shortcut_GRZX::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject Btn_shortcut_GRZX::staticMetaObject = {
    { &main_Btn_noa::staticMetaObject, qt_meta_stringdata_Btn_shortcut_GRZX.data,
      qt_meta_data_Btn_shortcut_GRZX,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Btn_shortcut_GRZX::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Btn_shortcut_GRZX::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Btn_shortcut_GRZX.stringdata0))
        return static_cast<void*>(this);
    return main_Btn_noa::qt_metacast(_clname);
}

int Btn_shortcut_GRZX::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = main_Btn_noa::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Btn_shortcut_CJWT_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Btn_shortcut_CJWT_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Btn_shortcut_CJWT_t qt_meta_stringdata_Btn_shortcut_CJWT = {
    {
QT_MOC_LITERAL(0, 0, 17) // "Btn_shortcut_CJWT"

    },
    "Btn_shortcut_CJWT"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Btn_shortcut_CJWT[] = {

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

void Btn_shortcut_CJWT::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject Btn_shortcut_CJWT::staticMetaObject = {
    { &main_Btn_noa::staticMetaObject, qt_meta_stringdata_Btn_shortcut_CJWT.data,
      qt_meta_data_Btn_shortcut_CJWT,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Btn_shortcut_CJWT::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Btn_shortcut_CJWT::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Btn_shortcut_CJWT.stringdata0))
        return static_cast<void*>(this);
    return main_Btn_noa::qt_metacast(_clname);
}

int Btn_shortcut_CJWT::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = main_Btn_noa::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Btn_shortcut_LXWM_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Btn_shortcut_LXWM_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Btn_shortcut_LXWM_t qt_meta_stringdata_Btn_shortcut_LXWM = {
    {
QT_MOC_LITERAL(0, 0, 17) // "Btn_shortcut_LXWM"

    },
    "Btn_shortcut_LXWM"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Btn_shortcut_LXWM[] = {

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

void Btn_shortcut_LXWM::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject Btn_shortcut_LXWM::staticMetaObject = {
    { &main_Btn_noa::staticMetaObject, qt_meta_stringdata_Btn_shortcut_LXWM.data,
      qt_meta_data_Btn_shortcut_LXWM,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Btn_shortcut_LXWM::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Btn_shortcut_LXWM::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Btn_shortcut_LXWM.stringdata0))
        return static_cast<void*>(this);
    return main_Btn_noa::qt_metacast(_clname);
}

int Btn_shortcut_LXWM::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = main_Btn_noa::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Btn_minimum_t {
    QByteArrayData data[4];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Btn_minimum_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Btn_minimum_t qt_meta_stringdata_Btn_minimum = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Btn_minimum"
QT_MOC_LITERAL(1, 12, 17), // "signal_btn_change"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 8) // "BTN_TYPE"

    },
    "Btn_minimum\0signal_btn_change\0\0BTN_TYPE"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Btn_minimum[] = {

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

void Btn_minimum::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Btn_minimum *_t = static_cast<Btn_minimum *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal_btn_change((*reinterpret_cast< BTN_TYPE(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Btn_minimum::*_t)(BTN_TYPE );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Btn_minimum::signal_btn_change)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Btn_minimum::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_Btn_minimum.data,
      qt_meta_data_Btn_minimum,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Btn_minimum::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Btn_minimum::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Btn_minimum.stringdata0))
        return static_cast<void*>(this);
    return QPushButton::qt_metacast(_clname);
}

int Btn_minimum::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Btn_minimum::signal_btn_change(BTN_TYPE _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_Btn_maximum_t {
    QByteArrayData data[4];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Btn_maximum_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Btn_maximum_t qt_meta_stringdata_Btn_maximum = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Btn_maximum"
QT_MOC_LITERAL(1, 12, 17), // "signal_btn_change"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 8) // "BTN_TYPE"

    },
    "Btn_maximum\0signal_btn_change\0\0BTN_TYPE"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Btn_maximum[] = {

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

void Btn_maximum::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Btn_maximum *_t = static_cast<Btn_maximum *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal_btn_change((*reinterpret_cast< BTN_TYPE(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Btn_maximum::*_t)(BTN_TYPE );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Btn_maximum::signal_btn_change)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Btn_maximum::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_Btn_maximum.data,
      qt_meta_data_Btn_maximum,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Btn_maximum::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Btn_maximum::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Btn_maximum.stringdata0))
        return static_cast<void*>(this);
    return QPushButton::qt_metacast(_clname);
}

int Btn_maximum::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Btn_maximum::signal_btn_change(BTN_TYPE _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_Btn_shut_t {
    QByteArrayData data[4];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Btn_shut_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Btn_shut_t qt_meta_stringdata_Btn_shut = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Btn_shut"
QT_MOC_LITERAL(1, 9, 17), // "signal_btn_change"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 8) // "BTN_TYPE"

    },
    "Btn_shut\0signal_btn_change\0\0BTN_TYPE"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Btn_shut[] = {

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

void Btn_shut::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Btn_shut *_t = static_cast<Btn_shut *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal_btn_change((*reinterpret_cast< BTN_TYPE(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Btn_shut::*_t)(BTN_TYPE );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Btn_shut::signal_btn_change)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Btn_shut::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_Btn_shut.data,
      qt_meta_data_Btn_shut,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Btn_shut::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Btn_shut::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Btn_shut.stringdata0))
        return static_cast<void*>(this);
    return QPushButton::qt_metacast(_clname);
}

int Btn_shut::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Btn_shut::signal_btn_change(BTN_TYPE _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
