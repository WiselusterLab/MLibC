.code16gcc
	.global _start

_start:
	call clrscr

	pushl $10
	pushl $10
	call gotoxy
	add $8, %esp

	pushl $msg
	call puts
	add $4, %esp
	jmp .

msg:
	.string "Hello, world!"
