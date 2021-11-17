/* write_c.s */

.data

greeting: .asciz "Hello world\n"
after_greeting:

/* This is an assembler constant: the assembler will compute it. Needless to say
   that this must evaluate to a constant value. In this case we are computing the
   difference of addresses between the address after_greeting and greeting. In this
   case it will be 13 */
.set size_of_greeting, after_greeting - greeting

.text

.globl main

main:
    push {r4, lr}

    /* Prepare the call to write */  
    mov r0, #1                /* First argument: 1 */
    ldr r1, addr_of_greeting  /* Second argument: &greeting */
    mov r2, #size_of_greeting /* Third argument: sizeof(greeting) */
    bl write                  /* write(1, greeting, sizeof(greeting));

    mov r0, #0
    pop {r4, lr}
    bx lr

addr_of_greeting : .word greeting