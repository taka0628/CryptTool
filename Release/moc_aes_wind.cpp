/****************************************************************************
** Meta object code from reading C++ file 'aes_wind.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qt_src/aes_wind.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'aes_wind.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_aes_wind_t {
    QByteArrayData data[11];
    char stringdata0[216];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_aes_wind_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_aes_wind_t qt_meta_stringdata_aes_wind = {
    {
QT_MOC_LITERAL(0, 0, 8), // "aes_wind"
QT_MOC_LITERAL(1, 9, 29), // "on_radioButton_aes128_toggled"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 7), // "checked"
QT_MOC_LITERAL(4, 48, 29), // "on_radioButton_aes256_toggled"
QT_MOC_LITERAL(5, 78, 27), // "on_lineEdit_key_textChanged"
QT_MOC_LITERAL(6, 106, 4), // "arg1"
QT_MOC_LITERAL(7, 111, 26), // "on_lineEdit_iv_textChanged"
QT_MOC_LITERAL(8, 138, 25), // "on_pushButton_enc_pressed"
QT_MOC_LITERAL(9, 164, 25), // "on_pushButton_dec_pressed"
QT_MOC_LITERAL(10, 190, 25) // "on_pushButton_cpy_pressed"

    },
    "aes_wind\0on_radioButton_aes128_toggled\0"
    "\0checked\0on_radioButton_aes256_toggled\0"
    "on_lineEdit_key_textChanged\0arg1\0"
    "on_lineEdit_iv_textChanged\0"
    "on_pushButton_enc_pressed\0"
    "on_pushButton_dec_pressed\0"
    "on_pushButton_cpy_pressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_aes_wind[] = {

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
       1,    1,   49,    2, 0x08 /* Private */,
       4,    1,   52,    2, 0x08 /* Private */,
       5,    1,   55,    2, 0x08 /* Private */,
       7,    1,   58,    2, 0x08 /* Private */,
       8,    0,   61,    2, 0x08 /* Private */,
       9,    0,   62,    2, 0x08 /* Private */,
      10,    0,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void aes_wind::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        aes_wind *_t = static_cast<aes_wind *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_radioButton_aes128_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_radioButton_aes256_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_lineEdit_key_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_lineEdit_iv_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_pushButton_enc_pressed(); break;
        case 5: _t->on_pushButton_dec_pressed(); break;
        case 6: _t->on_pushButton_cpy_pressed(); break;
        default: ;
        }
    }
}

const QMetaObject aes_wind::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_aes_wind.data,
      qt_meta_data_aes_wind,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *aes_wind::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *aes_wind::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_aes_wind.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int aes_wind::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
