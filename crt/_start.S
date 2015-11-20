.code16gcc
.text
	.global _start

_start:
	call main
1:
	hlt
	jmp 1b
