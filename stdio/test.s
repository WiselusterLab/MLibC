.code16gcc
	.global _start

_start:
	call clrscr

	pushl $10
	pushl $10
	call gotoxy
	add $8, %esp

	movb $0x1F, __video_attributes
	pushl $msg
	call puts
	add $4, %esp
	jmp .

msg:
	.string "Hello, world!"
