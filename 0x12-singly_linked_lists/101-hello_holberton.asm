global    main
extern    printf

section .data
    format db "Hello, Holberton\n", 0

section .text
main:
    mov   edi, format      ; set format string
    xor   eax, eax         ; clear eax
    call  printf           ; call printf

    mov   eax, 0           ; return 0
    ret                    ; exit the program