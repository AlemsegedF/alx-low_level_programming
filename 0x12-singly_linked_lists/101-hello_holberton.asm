section .data
    string1 db  "Hello, Holberton",10   ; '10' at end is line feed

section .text
    global main

    main:
        mov  rdx, 0x11               ; length of string is 13 bytes
        mov  rsi, dword string1     ; set rsi to pointer to string
        mov  rax, 0x1               ; syscall 1 is write
        mov  rdi, 0x1               ; stdout has a file descriptor of 1
        syscall                     ; make the system call

        mov  rax, 0x3c              ; syscall 3c is exit
        syscall                     ; make the system call
