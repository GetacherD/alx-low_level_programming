global main
extern printf

section .data
	msg db "Hello, Holberton", 0x0A, 0x00
	len equ $ -msg
main:
	push rbp
	mov rbp, rsp
	push len
	push msg
	call printf
	mov rax , 0
	mov rsp ,rbp
	pop rbp
	ret
