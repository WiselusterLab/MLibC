#include <bios.h>

.code16gcc
	.global _start

_start:
	call clrscr

	pushl $Y
	pushl $X
	call gotoxy
	add $8, %esp

	movb $BIOS_COLOR(BIOS_COLOR_WHITE, BIOS_COLOR_BLUE), __mlibc_bios_video_attributes
	pushl $msg
	call puts
	add $4, %esp
	jmp .

msg:
	.string "Hello, world!"
	.equ X, 10
	.equ Y, 10
