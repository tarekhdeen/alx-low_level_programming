section .data
hello_message db 'Hello, Holberton', 0
format db '%s', 10, 0 ; Added newline character (10 in ASCII)

section .text
global main
extern printf

main:
; Prepare arguments for printf
mov rdi, format       ; Format string address
mov rsi, hello_message  ; Message address

; Call printf
call printf

; Return from main (this will implicitly exit the program)
xor eax, eax
ret

