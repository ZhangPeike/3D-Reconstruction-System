/****************************************************************************
** Meta object code from reading C++ file 'clickimage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../clickimage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clickimage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ClickImage_t {
    QByteArrayData data[11];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClickImage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClickImage_t qt_meta_stringdata_ClickImage = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ClickImage"
QT_MOC_LITERAL(1, 11, 13), // "mouse_clicked"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 1), // "x"
QT_MOC_LITERAL(4, 28, 1), // "y"
QT_MOC_LITERAL(5, 30, 12), // "QMouseEvent*"
QT_MOC_LITERAL(6, 43, 5), // "event"
QT_MOC_LITERAL(7, 49, 14), // "mouse_released"
QT_MOC_LITERAL(8, 64, 11), // "mouse_moved"
QT_MOC_LITERAL(9, 76, 12), // "mouse_zoomed"
QT_MOC_LITERAL(10, 89, 12) // "QWheelEvent*"

    },
    "ClickImage\0mouse_clicked\0\0x\0y\0"
    "QMouseEvent*\0event\0mouse_released\0"
    "mouse_moved\0mouse_zoomed\0QWheelEvent*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClickImage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   34,    2, 0x06 /* Public */,
       7,    3,   41,    2, 0x06 /* Public */,
       8,    3,   48,    2, 0x06 /* Public */,
       9,    3,   55,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 5,    3,    4,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 5,    3,    4,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 5,    3,    4,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 10,    3,    4,    6,

       0        // eod
};

void ClickImage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ClickImage *_t = static_cast<ClickImage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mouse_clicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QMouseEvent*(*)>(_a[3]))); break;
        case 1: _t->mouse_released((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QMouseEvent*(*)>(_a[3]))); break;
        case 2: _t->mouse_moved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QMouseEvent*(*)>(_a[3]))); break;
        case 3: _t->mouse_zoomed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QWheelEvent*(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ClickImage::*_t)(int , int , QMouseEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClickImage::mouse_clicked)) {
                *result = 0;
            }
        }
        {
            typedef void (ClickImage::*_t)(int , int , QMouseEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClickImage::mouse_released)) {
                *result = 1;
            }
        }
        {
            typedef void (ClickImage::*_t)(int , int , QMouseEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClickImage::mouse_moved)) {
                *result = 2;
            }
        }
        {
            typedef void (ClickImage::*_t)(int , int , QWheelEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClickImage::mouse_zoomed)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject ClickImage::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_ClickImage.data,
      qt_meta_data_ClickImage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ClickImage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClickImage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ClickImage.stringdata0))
        return static_cast<void*>(const_cast< ClickImage*>(this));
    return QLabel::qt_metacast(_clname);
}

int ClickImage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void ClickImage::mouse_clicked(int _t1, int _t2, QMouseEvent * _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ClickImage::mouse_released(int _t1, int _t2, QMouseEvent * _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ClickImage::mouse_moved(int _t1, int _t2, QMouseEvent * _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ClickImage::mouse_zoomed(int _t1, int _t2, QWheelEvent * _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
