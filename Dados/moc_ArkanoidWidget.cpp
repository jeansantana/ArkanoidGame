/****************************************************************************
** Meta object code from reading C++ file 'ArkanoidWidget.h'
**
** Created: Sat Nov 3 11:36:19 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ArkanoidGame/ArkanoidWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ArkanoidWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ArkanoidView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ArkanoidView[] = {
    "ArkanoidView\0\0moveUpdate()\0"
};

void ArkanoidView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ArkanoidView *_t = static_cast<ArkanoidView *>(_o);
        switch (_id) {
        case 0: _t->moveUpdate(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ArkanoidView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ArkanoidView::staticMetaObject = {
    { &QGLWidget::staticMetaObject, qt_meta_stringdata_ArkanoidView,
      qt_meta_data_ArkanoidView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ArkanoidView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ArkanoidView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ArkanoidView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ArkanoidView))
        return static_cast<void*>(const_cast< ArkanoidView*>(this));
    return QGLWidget::qt_metacast(_clname);
}

int ArkanoidView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
