; The text section

section .text
	global _start
	_start:
		mov rdx, len
		mov rcx, msg
		mov rbx, 1
		mov rax, 4
		int 0x80
		mov rax, 1
		int 0x080
section .data
	msg db "Hello, Holberton", 0xA
	len equ $ -msg
