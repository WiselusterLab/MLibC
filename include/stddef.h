#ifndef _MLIBC_STDDEF_H_INCLUDED_
#define _MLIBC_STDDEF_H_INCLUDED_ 1

#ifdef __cplusplus
#define __BEGIN_DECLS extern "C" {
#define __END_DECLS }
#define NULL (0)
#define STATIC_CAST(type, expr) static_cast<type>(expr)
#define DYNAMIC_CAST(type, expr) dynamic_cast<type>(expr)
#define CONST_CAST(type, expr) const_cast<type>(expr)
#define REINTERPRET_CAST(type, expr) reinterpret_cast<type>(expr)

#else
#define __BEGIN_DECLS
#define __END_DECLS
#define NULL ((void *) 0)
#define STATIC_CAST(type, expr) ((type) (expr))
#define DYNAMIC_CAST(type, expr) ((type) (expr))
#define CONST_CAST(type, expr) ((type) (expr))
#define REINTERPRET_CAST(type, expr) ((type) (expr))

#endif /* __cplusplus */

typedef unsigned char byte;
typedef unsigned short word;
typedef unsigned int dword;

typedef signed long ssize_t;
typedef unsigned long size_t;

#endif /* _MLIBC_STDDEF_H_INCLUDED_ */
