section .text
global divide

divide:
    mov eax, ecx    ; a -> EAX
    mov ecx, edx    ; b -> ECX (save before cdq overwrites EDX)
    cdq             ; Sign-extend EAX into EDX:EAX
    idiv ecx        ; Divide by ECX (original b)
    ret