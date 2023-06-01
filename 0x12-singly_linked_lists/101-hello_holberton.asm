extern printf
global main

section .text

main:
	mov rsi, hola
	mov rdi, frmt
	mov rax, 0
	call printf
	
	mov rax, 0
	ret

section .data
	hola: db "Hello, Holberton", 0
	frmt: db "%s", 10, 0
