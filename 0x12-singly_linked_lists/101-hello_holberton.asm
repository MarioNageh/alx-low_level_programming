section .data
    hello: db 'Hello, Holberton', 0xA, 0

section .text
    global main
    extern printf

main:
    push rbp          ; Save old base pointer
    mov rbp, rsp      ; Set new base pointer

    lea rdi, [hello]  ; Load address of hello string into rdi
    xor eax, eax      ; Clear eax
    call printf       ; Call printf to print hello string

    mov rsp, rbp      ; Restore stack pointer
    pop rbp           ; Restore base pointer

    xor eax, eax      ; Clear eax
    ret               ; Return to operating system
