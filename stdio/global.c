#include <stdio.h>

int __mlibc_vidattr __attribute__((section(".text"))) = BIOS_VIDEO_ATTRIB_DEFAULT;
