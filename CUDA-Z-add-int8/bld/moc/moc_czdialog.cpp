/****************************************************************************
** Meta object code from reading C++ file 'czdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/czdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'czdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CZSplashScreen_t {
    QByteArrayData data[7];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CZSplashScreen_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CZSplashScreen_t qt_meta_stringdata_CZSplashScreen = {
    {
QT_MOC_LITERAL(0, 0, 14), // "CZSplashScreen"
QT_MOC_LITERAL(1, 15, 11), // "showMessage"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 7), // "message"
QT_MOC_LITERAL(4, 36, 9), // "alignment"
QT_MOC_LITERAL(5, 46, 5), // "color"
QT_MOC_LITERAL(6, 52, 12) // "clearMessage"

    },
    "CZSplashScreen\0showMessage\0\0message\0"
    "alignment\0color\0clearMessage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CZSplashScreen[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   34,    2, 0x0a /* Public */,
       1,    2,   41,    2, 0x2a /* Public | MethodCloned */,
       1,    1,   46,    2, 0x2a /* Public | MethodCloned */,
       6,    0,   49,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::QColor,    3,    4,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

       0        // eod
};

void CZSplashScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CZSplashScreen *_t = static_cast<CZSplashScreen *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QColor(*)>(_a[3]))); break;
        case 1: _t->showMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->showMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->clearMessage(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CZSplashScreen::staticMetaObject = { {
    &QSplashScreen::staticMetaObject,
    qt_meta_stringdata_CZSplashScreen.data,
    qt_meta_data_CZSplashScreen,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CZSplashScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CZSplashScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CZSplashScreen.stringdata0))
        return static_cast<void*>(this);
    return QSplashScreen::qt_metacast(_clname);
}

int CZSplashScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSplashScreen::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_CZDialog_t {
    QByteArrayData data[12];
    char stringdata0[178];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CZDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CZDialog_t qt_meta_stringdata_CZDialog = {
    {
QT_MOC_LITERAL(0, 0, 8), // "CZDialog"
QT_MOC_LITERAL(1, 9, 14), // "slotShowDevice"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 5), // "index"
QT_MOC_LITERAL(4, 31, 21), // "slotUpdatePerformance"
QT_MOC_LITERAL(5, 53, 15), // "slotUpdateTimer"
QT_MOC_LITERAL(6, 69, 16), // "slotExportToText"
QT_MOC_LITERAL(7, 86, 16), // "slotExportToHTML"
QT_MOC_LITERAL(8, 103, 21), // "slotExportToClipboard"
QT_MOC_LITERAL(9, 125, 17), // "slotUpdateVersion"
QT_MOC_LITERAL(10, 143, 16), // "slotHttpFinished"
QT_MOC_LITERAL(11, 160, 17) // "slotHttpReadyRead"

    },
    "CZDialog\0slotShowDevice\0\0index\0"
    "slotUpdatePerformance\0slotUpdateTimer\0"
    "slotExportToText\0slotExportToHTML\0"
    "slotExportToClipboard\0slotUpdateVersion\0"
    "slotHttpFinished\0slotHttpReadyRead"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CZDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x08 /* Private */,
       4,    1,   62,    2, 0x08 /* Private */,
       5,    0,   65,    2, 0x08 /* Private */,
       6,    0,   66,    2, 0x08 /* Private */,
       7,    0,   67,    2, 0x08 /* Private */,
       8,    0,   68,    2, 0x08 /* Private */,
       9,    0,   69,    2, 0x08 /* Private */,
      10,    0,   70,    2, 0x08 /* Private */,
      11,    0,   71,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CZDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CZDialog *_t = static_cast<CZDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotShowDevice((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->slotUpdatePerformance((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->slotUpdateTimer(); break;
        case 3: _t->slotExportToText(); break;
        case 4: _t->slotExportToHTML(); break;
        case 5: _t->slotExportToClipboard(); break;
        case 6: _t->slotUpdateVersion(); break;
        case 7: _t->slotHttpFinished(); break;
        case 8: _t->slotHttpReadyRead(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CZDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_CZDialog.data,
    qt_meta_data_CZDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CZDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CZDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CZDialog.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::CZDialog"))
        return static_cast< Ui::CZDialog*>(this);
    return QDialog::qt_metacast(_clname);
}

int CZDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
