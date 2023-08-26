section .data
    hello db "Hello, Holberton", 0
    format db "Hello, Holberton\n", 0

section .text
    extern printf

global main
main:
    sub rsp, 8                ; align stack pointer

    mov rdi, format           ; set format string
    mov rsi, 0                ; no additional argument needed
    xor eax, eax              ; clear eax
    call printf               ; call printf

    add rsp, 8                ; restore stack pointer
    xor eax, eax              ; clear eax

    ret                       ; exit the program