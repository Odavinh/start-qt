/****************************************************************************
** Resource object code
**
** Created by: The Resource Compiler for Qt version 5.12.0
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

static const unsigned char qt_resource_data[] = {
  // D:/qtp/Aida/memory_k.txt
  0x0,0x0,0x0,0x14,
  0x48,
  0x65,0x6c,0x6f,0x20,0x41,0x69,0x64,0x61,0xd,0xa,0x6b,0x79,0x20,0x41,0x69,0x64,
  0x61,0xd,0xa,
    // D:/qtp/Aida/memory.txt
  0x0,0x0,0x0,0xa,
  0x48,
  0x65,0x6c,0x6f,0xd,0xa,0x4b,0x79,0xd,0xa,
  
};

static const unsigned char qt_resource_name[] = {
  // new
  0x0,0x3,
  0x0,0x0,0x74,0xc7,
  0x0,0x6e,
  0x0,0x65,0x0,0x77,
    // txt
  0x0,0x3,
  0x0,0x0,0x7b,0xf4,
  0x0,0x74,
  0x0,0x78,0x0,0x74,
    // memory_k.txt
  0x0,0xc,
  0x1,0x26,0xd6,0xd4,
  0x0,0x6d,
  0x0,0x65,0x0,0x6d,0x0,0x6f,0x0,0x72,0x0,0x79,0x0,0x5f,0x0,0x6b,0x0,0x2e,0x0,0x74,0x0,0x78,0x0,0x74,
    // memory.txt
  0x0,0xa,
  0x6,0x96,0x23,0x74,
  0x0,0x6d,
  0x0,0x65,0x0,0x6d,0x0,0x6f,0x0,0x72,0x0,0x79,0x0,0x2e,0x0,0x74,0x0,0x78,0x0,0x74,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/new
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x2,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/new/txt
  0x0,0x0,0x0,0xc,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x3,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/new/txt/memory_k.txt
  0x0,0x0,0x0,0x18,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x1,0x69,0x2f,0xb3,0xde,0xd,
  // :/new/txt/memory.txt
  0x0,0x0,0x0,0x36,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x18,
0x0,0x0,0x1,0x69,0x2f,0xb3,0xde,0x60,

};

#ifdef QT_NAMESPACE
#  define QT_RCC_PREPEND_NAMESPACE(name) ::QT_NAMESPACE::name
#  define QT_RCC_MANGLE_NAMESPACE0(x) x
#  define QT_RCC_MANGLE_NAMESPACE1(a, b) a##_##b
#  define QT_RCC_MANGLE_NAMESPACE2(a, b) QT_RCC_MANGLE_NAMESPACE1(a,b)
#  define QT_RCC_MANGLE_NAMESPACE(name) QT_RCC_MANGLE_NAMESPACE2( \
        QT_RCC_MANGLE_NAMESPACE0(name), QT_RCC_MANGLE_NAMESPACE0(QT_NAMESPACE))
#else
#   define QT_RCC_PREPEND_NAMESPACE(name) name
#   define QT_RCC_MANGLE_NAMESPACE(name) name
#endif

#ifdef QT_NAMESPACE
namespace QT_NAMESPACE {
#endif

bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

bool qUnregisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

#ifdef QT_NAMESPACE
}
#endif

int QT_RCC_MANGLE_NAMESPACE(qInitResources_doc)();
int QT_RCC_MANGLE_NAMESPACE(qInitResources_doc)()
{
    QT_RCC_PREPEND_NAMESPACE(qRegisterResourceData)
        (0x2, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_doc)();
int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_doc)()
{
    QT_RCC_PREPEND_NAMESPACE(qUnregisterResourceData)
       (0x2, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

namespace {
   struct initializer {
       initializer() { QT_RCC_MANGLE_NAMESPACE(qInitResources_doc)(); }
       ~initializer() { QT_RCC_MANGLE_NAMESPACE(qCleanupResources_doc)(); }
   } dummy;
}
