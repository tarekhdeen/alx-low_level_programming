section .data
hello_message db 'Hello, Holberton', 0
format db '%s', 0

section .text
global main
extern printf, exit


main:
; Prepare arguments for printf
mov rdi, format       ; Format string address
mov rsi, hello_message  ; Message address

; Call printf
call printf

; Exit program using syscall
mov eax, 60          ; System call number for exit
xor edi, edi         ; Exit code 0
syscall             ; Make system call

; This point is never reached, but it's good to have a return value for main
ret
