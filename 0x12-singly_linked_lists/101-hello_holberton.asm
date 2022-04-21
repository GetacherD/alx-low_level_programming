global _start

section .text
_start:
	mov rsi, msg
	mov rax, 1
	mov rdi, 1
	mov rdx, len
	syscall
	mov rax, 0x3c
	xor rdi, rdi
	syscall
section .data
msg: db "Hello, Holberton", 10
len equ $ -msg
