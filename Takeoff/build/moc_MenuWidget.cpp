/****************************************************************************
** Meta object code from reading C++ file 'MenuWidget.h'
**
** Created: Thu Sep 29 17:29:59 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/takeoff/view/takeoff_widget/menu/MenuWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MenuWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TakeoffPrivate__MenuWidget[] = {

 // content:
       5,       // revision
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

static const char qt_meta_stringdata_TakeoffPrivate__MenuWidget[] = {
    "TakeoffPrivate::MenuWidget\0"
};

const QMetaObject TakeoffPrivate::MenuWidget::staticMetaObject = {
    { &QGraphicsWidget::staticMetaObject, qt_meta_stringdata_TakeoffPrivate__MenuWidget,
      qt_meta_data_TakeoffPrivate__MenuWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TakeoffPrivate::MenuWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TakeoffPrivate::MenuWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TakeoffPrivate::MenuWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TakeoffPrivate__MenuWidget))
        return static_cast<void*>(const_cast< MenuWidget*>(this));
    return QGraphicsWidget::qt_metacast(_clname);
}

int TakeoffPrivate::MenuWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
