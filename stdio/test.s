.code16gcc
	.global _start

_start:
	pushl $10
	pushl $10
	pushl $msg
	call puts
	add $4, %esp
	jmp .

msg:
	.string "Hello, world!"
