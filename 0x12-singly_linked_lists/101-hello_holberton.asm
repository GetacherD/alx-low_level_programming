extern printf
section .text
   global main

main:
   push rbp

   mov rdx,format
   mov rcx,message
   mov rax,0
   call printf

   pop rbp

   mov rax,0
   ret

section .data
   message: db "Hello, Holberton", 0
  	format: db "%s", 10, 0
