/****************************************************************************
** Meta object code from reading C++ file 'subscription.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../oldproject/hnnk_standard/HNNK_UI/pri_0_homep/subscription.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'subscription.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Subscription_t {
    QByteArrayData data[14];
    char stringdata0[166];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Subscription_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Subscription_t qt_meta_stringdata_Subscription = {
    {
QT_MOC_LITERAL(0, 0, 12), // "Subscription"
QT_MOC_LITERAL(1, 13, 13), // "getDeviceInfo"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 8), // "deviceid"
QT_MOC_LITERAL(4, 37, 10), // "devicetype"
QT_MOC_LITERAL(5, 48, 7), // "numbers"
QT_MOC_LITERAL(6, 56, 8), // "noDevice"
QT_MOC_LITERAL(7, 65, 13), // "updateMessage"
QT_MOC_LITERAL(8, 79, 12), // "QMqttMessage"
QT_MOC_LITERAL(9, 92, 3), // "msg"
QT_MOC_LITERAL(10, 96, 12), // "updateStatus"
QT_MOC_LITERAL(11, 109, 36), // "QMqttSubscription::Subscripti..."
QT_MOC_LITERAL(12, 146, 5), // "state"
QT_MOC_LITERAL(13, 152, 13) // "stopSubscribe"

    },
    "Subscription\0getDeviceInfo\0\0deviceid\0"
    "devicetype\0numbers\0noDevice\0updateMessage\0"
    "QMqttMessage\0msg\0updateStatus\0"
    "QMqttSubscription::SubscriptionState\0"
    "state\0stopSubscribe"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Subscription[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   39,    2, 0x06 /* Public */,
       6,    0,   46,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   47,    2, 0x0a /* Public */,
      10,    1,   50,    2, 0x0a /* Public */,
      13,    0,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Int,    3,    4,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,

       0        // eod
};

void Subscription::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Subscription *_t = static_cast<Subscription *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getDeviceInfo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->noDevice(); break;
        case 2: _t->updateMessage((*reinterpret_cast< const QMqttMessage(*)>(_a[1]))); break;
        case 3: _t->updateStatus((*reinterpret_cast< QMqttSubscription::SubscriptionState(*)>(_a[1]))); break;
        case 4: _t->stopSubscribe(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMqttMessage >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Subscription::*_t)(int , QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Subscription::getDeviceInfo)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Subscription::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Subscription::noDevice)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject Subscription::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Subscription.data,
      qt_meta_data_Subscription,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Subscription::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Subscription::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Subscription.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Subscription::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Subscription::getDeviceInfo(int _t1, QString _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Subscription::noDevice()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
