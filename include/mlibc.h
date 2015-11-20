#ifndef __MLIBC__
#define __MLIBC__ 1

#define __MLIBC_VERSION__ MLIBC_VERSION_SET(0, 0, 2, 0)
#define MLIBC_VERSION_SET(major, minor, patch, small) (((major) << 0x18) | ((minor) << 0x10) | ((patch) << 0x08) | (small))

#endif /* __MLIBC__ */
