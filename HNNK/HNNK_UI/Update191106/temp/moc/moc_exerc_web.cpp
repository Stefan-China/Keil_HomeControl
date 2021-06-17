/****************************************************************************
** Meta object code from reading C++ file 'exerc_web.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../oldproject/hnnk_standard/HNNK_UI/pri_2_exerc/exerc_web.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'exerc_web.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_webview_t {
    QByteArrayData data[1];
    char stringdata0[8];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_webview_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_webview_t qt_meta_stringdata_webview = {
    {
QT_MOC_LITERAL(0, 0, 7) // "webview"

    },
    "webview"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_webview[] = {

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

void webview::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject webview::staticMetaObject = {
    { &QWebEngineView::staticMetaObject, qt_meta_stringdata_webview.data,
      qt_meta_data_webview,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *webview::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *webview::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_webview.stringdata0))
        return static_cast<void*>(this);
    return QWebEngineView::qt_metacast(_clname);
}

int webview::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWebEngineView::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_exerc_web_t {
    QByteArrayData data[9];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_exerc_web_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_exerc_web_t qt_meta_stringdata_exerc_web = {
    {
QT_MOC_LITERAL(0, 0, 9), // "exerc_web"
QT_MOC_LITERAL(1, 10, 18), // "signal_set_website"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 19), // "signal_website_exit"
QT_MOC_LITERAL(4, 50, 14), // "changeLocation"
QT_MOC_LITERAL(5, 65, 11), // "setProgress"
QT_MOC_LITERAL(6, 77, 11), // "adjustTitle"
QT_MOC_LITERAL(7, 89, 13), // "finishloading"
QT_MOC_LITERAL(8, 103, 16) // "slot_set_website"

    },
    "exerc_web\0signal_set_website\0\0"
    "signal_website_exit\0changeLocation\0"
    "setProgress\0adjustTitle\0finishloading\0"
    "slot_set_website"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_exerc_web[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       3,    1,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   55,    2, 0x08 /* Private */,
       5,    1,   56,    2, 0x08 /* Private */,
       6,    0,   59,    2, 0x08 /* Private */,
       7,    1,   60,    2, 0x08 /* Private */,
       8,    1,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void exerc_web::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        exerc_web *_t = static_cast<exerc_web *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal_set_website((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->signal_website_exit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->changeLocation(); break;
        case 3: _t->setProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->adjustTitle(); break;
        case 5: _t->finishloading((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->slot_set_website((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (exerc_web::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&exerc_web::signal_set_website)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (exerc_web::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&exerc_web::signal_website_exit)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject exerc_web::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_exerc_web.data,
      qt_meta_data_exerc_web,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *exerc_web::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *exerc_web::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_exerc_web.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int exerc_web::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void exerc_web::signal_set_website(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void exerc_web::signal_website_exit(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_title_widget_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_title_widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_title_widget_t qt_meta_stringdata_title_widget = {
    {
QT_MOC_LITERAL(0, 0, 12) // "title_widget"

    },
    "title_widget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_title_widget[] = {

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

void title_widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject title_widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_title_widget.data,
      qt_meta_data_title_widget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *title_widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *title_widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_title_widget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int title_widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
