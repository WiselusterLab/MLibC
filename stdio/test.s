.code16gcc
	.global _start

_start:
	pushl $msg
	call puts
	add $4, %esp
	jmp .

msg:
	.string "Hello, world!"
