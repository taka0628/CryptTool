/****************************************************************************
** Meta object code from reading C++ file 'sha_mode_wind.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qt_src/sha_mode_wind.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sha_mode_wind.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_sha_mode_wind_t {
    QByteArrayData data[14];
    char stringdata0[337];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_sha_mode_wind_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_sha_mode_wind_t qt_meta_stringdata_sha_mode_wind = {
    {
QT_MOC_LITERAL(0, 0, 13), // "sha_mode_wind"
QT_MOC_LITERAL(1, 14, 27), // "on_radioButton_sha1_clicked"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 27), // "on_radioButton_sha2_clicked"
QT_MOC_LITERAL(4, 71, 27), // "on_radioButton_sha3_clicked"
QT_MOC_LITERAL(5, 99, 30), // "on_radioButton_bit_224_clicked"
QT_MOC_LITERAL(6, 130, 30), // "on_radioButton_bit_256_clicked"
QT_MOC_LITERAL(7, 161, 30), // "on_radioButton_bit_384_clicked"
QT_MOC_LITERAL(8, 192, 30), // "on_radioButton_bit_512_clicked"
QT_MOC_LITERAL(9, 223, 29), // "on_lineEdit_input_textChanged"
QT_MOC_LITERAL(10, 253, 4), // "arg1"
QT_MOC_LITERAL(11, 258, 29), // "on_radioButton_string_clicked"
QT_MOC_LITERAL(12, 288, 26), // "on_radioButton_hex_clicked"
QT_MOC_LITERAL(13, 315, 21) // "on_pushButton_clicked"

    },
    "sha_mode_wind\0on_radioButton_sha1_clicked\0"
    "\0on_radioButton_sha2_clicked\0"
    "on_radioButton_sha3_clicked\0"
    "on_radioButton_bit_224_clicked\0"
    "on_radioButton_bit_256_clicked\0"
    "on_radioButton_bit_384_clicked\0"
    "on_radioButton_bit_512_clicked\0"
    "on_lineEdit_input_textChanged\0arg1\0"
    "on_radioButton_string_clicked\0"
    "on_radioButton_hex_clicked\0"
    "on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_sha_mode_wind[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    1,   76,    2, 0x08 /* Private */,
      11,    0,   79,    2, 0x08 /* Private */,
      12,    0,   80,    2, 0x08 /* Private */,
      13,    0,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void sha_mode_wind::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        sha_mode_wind *_t = static_cast<sha_mode_wind *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_radioButton_sha1_clicked(); break;
        case 1: _t->on_radioButton_sha2_clicked(); break;
        case 2: _t->on_radioButton_sha3_clicked(); break;
        case 3: _t->on_radioButton_bit_224_clicked(); break;
        case 4: _t->on_radioButton_bit_256_clicked(); break;
        case 5: _t->on_radioButton_bit_384_clicked(); break;
        case 6: _t->on_radioButton_bit_512_clicked(); break;
        case 7: _t->on_lineEdit_input_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_radioButton_string_clicked(); break;
        case 9: _t->on_radioButton_hex_clicked(); break;
        case 10: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject sha_mode_wind::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_sha_mode_wind.data,
      qt_meta_data_sha_mode_wind,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *sha_mode_wind::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *sha_mode_wind::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_sha_mode_wind.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int sha_mode_wind::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
