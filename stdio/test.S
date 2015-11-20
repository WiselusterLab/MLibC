#include <bios.h>

.code16gcc
	.global _start

_start:
	call clrscr

	pushl $0x25
	pushl $0x0A
	call gotoxy
	add $8, %esp

	movb $BIOS_VIDEO_COLOR(BIOS_VIDEO_WHITE, BIOS_VIDEO_BLUE), __mlibc_bios_video_attributes
	pushl $msg
	call puts
	add $4, %esp
	jmp .

msg:
	.string "Hello, world!"
