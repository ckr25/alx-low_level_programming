section .data
    hello: db "Hello, Holberton", 10, 0  ; Message to print(null_terminated string)

section .text
    global main

    extern printf

main:
    ; set up stack frame
    push rbp
    mov rbp, rsp

    ; call printf with the message string
    lea rdi, [hello]
    xor eax, eax   ; clear return value
    call printf

    ;clean up stack and return
    mov rsp, rbp
    pop rbp
    xor eax, eax   ; Return 0
    ret

