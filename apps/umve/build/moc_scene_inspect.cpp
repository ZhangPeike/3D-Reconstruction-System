/****************************************************************************
** Meta object code from reading C++ file 'scene_inspect.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../scene_inspect/scene_inspect.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scene_inspect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SceneInspect_t {
    QByteArrayData data[13];
    char stringdata0[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SceneInspect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SceneInspect_t qt_meta_stringdata_SceneInspect = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SceneInspect"
QT_MOC_LITERAL(1, 13, 12), // "on_open_mesh"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 17), // "on_reload_shaders"
QT_MOC_LITERAL(4, 45, 18), // "on_details_toggled"
QT_MOC_LITERAL(5, 64, 18), // "on_save_screenshot"
QT_MOC_LITERAL(6, 83, 17), // "on_scene_selected"
QT_MOC_LITERAL(7, 101, 15), // "mve::Scene::Ptr"
QT_MOC_LITERAL(8, 117, 5), // "scene"
QT_MOC_LITERAL(9, 123, 16), // "on_view_selected"
QT_MOC_LITERAL(10, 140, 14), // "mve::View::Ptr"
QT_MOC_LITERAL(11, 155, 4), // "view"
QT_MOC_LITERAL(12, 160, 16) // "on_tab_activated"

    },
    "SceneInspect\0on_open_mesh\0\0on_reload_shaders\0"
    "on_details_toggled\0on_save_screenshot\0"
    "on_scene_selected\0mve::Scene::Ptr\0"
    "scene\0on_view_selected\0mve::View::Ptr\0"
    "view\0on_tab_activated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SceneInspect[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    1,   53,    2, 0x08 /* Private */,
       9,    1,   56,    2, 0x08 /* Private */,
      12,    0,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,

       0        // eod
};

void SceneInspect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SceneInspect *_t = static_cast<SceneInspect *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_open_mesh(); break;
        case 1: _t->on_reload_shaders(); break;
        case 2: _t->on_details_toggled(); break;
        case 3: _t->on_save_screenshot(); break;
        case 4: _t->on_scene_selected((*reinterpret_cast< mve::Scene::Ptr(*)>(_a[1]))); break;
        case 5: _t->on_view_selected((*reinterpret_cast< mve::View::Ptr(*)>(_a[1]))); break;
        case 6: _t->on_tab_activated(); break;
        default: ;
        }
    }
}

const QMetaObject SceneInspect::staticMetaObject = {
    { &MainWindowTab::staticMetaObject, qt_meta_stringdata_SceneInspect.data,
      qt_meta_data_SceneInspect,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SceneInspect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SceneInspect::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SceneInspect.stringdata0))
        return static_cast<void*>(const_cast< SceneInspect*>(this));
    return MainWindowTab::qt_metacast(_clname);
}

int SceneInspect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MainWindowTab::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
