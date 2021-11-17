/* -- mult64.s */
.data

.align 4
message : .asciz "Multiplication of %lld by %lld is %lld\n"

.align 8
number_a_low: .word 3755744309
number_a_high: .word 2

.align 8
number_b_low: .word 12345678
number_b_high: .word 0

.text

/* Note: This is not the most efficient way to doa 64-bit multiplication.
   This is for illustration purposes */
mult64:
   /* The argument will be passed in r0, r1 and r2, r3 and returned in r0, r1 */
   /* Keep the registers that we are going to write */
   push {r4, r5, r6, r7, r8, lr}
   /* For covenience, move {r0,r1} into {r4,r5} */
   mov r4, r0   /* r0 ← r4 */
   mov r5, r1   /* r5 ← r1 */

   umull r0, r6, r2, r4    /* {r0,r6} ← r2 * r4 */
   umull r7, r8, r3, r4    /* {r7,r8} ← r3 * r4 */
   umull r4, r5, r2, r5    /* {r4,r5} ← r2 * r5 */
   adds r2, r7, r4         /* r2 ← r7 + r4 and update cpsr */
   adc r1, r2, r6          /* r1 ← r2 + r6 + C */

   /* Restore registers */
   pop {r4, r5, r6, r7, r8, lr}
   bx lr                   /* Leave mult64 */

.global main
main:
    push {r4, r5, r6, r7, r8, lr}       /* Keep the registers we are going to modify */
                                        /* r8 is not actually used here, but this way 
                                           the stack is already 8-byte aligned */
    /* Load the numbers from memory */
    /* {r4,r5} ← a */
    ldr r4, addr_number_a_low       /* r4 ← &a_low */
    ldr r4, [r4]                    /* r4 ← *r4 */
    ldr r5, addr_number_a_high      /* r5 ← &a_high  */
    ldr r5, [r5]                    /* r5 ← *r5 */

    /* {r6,r7} ← b */
    ldr r6, addr_number_b_low       /* r6 ← &b_low  */
    ldr r6, [r6]                    /* r6 ← *r6 */
    ldr r7, addr_number_b_high      /* r7 ← &b_high  */
    ldr r7, [r7]                    /* r7 ← *r7 */

    /* Now prepare the call to mult64
    /* 
       The first number is passed in 
       registers {r0,r1} and the second one in {r2,r3}
    */
    mov r0, r4                  /* r0 ← r4 */
    mov r1, r5                  /* r1 ← r5 */

    mov r2, r6                  /* r2 ← r6 */
    mov r3, r7                  /* r3 ← r7 */

    bl mult64                  /* call mult64 function */
    /* The result of the multiplication is in r0,r1 */

    /* Now prepare the call to printf */
    /* We have to pass &message, {r4,r5}, {r6,r7} and {r0,r1} */
    push {r1}                   /* Push r1 onto the stack. 4th (higher) parameter */
    push {r0}                   /* Push r0 onto the stack. 4th (lower) parameter */
    push {r7}                   /* Push r7 onto the stack. 3rd (higher) parameter */
    push {r6}                   /* Push r6 onto the stack. 3rd (lower) parameter */
    mov r3, r5                  /* r3 ← r5.                2rd (higher) parameter */
    mov r2, r4                  /* r2 ← r4.                2nd (lower) parameter */
    ldr r0, addr_of_message     /* r0 ← &message           1st parameter */
    bl printf                   /* Call printf */
    add sp, sp, #16             /* sp ← sp + 16 */
                                /* Pop the two registers we pushed above */

    mov r0, #0                  /* r0 ← 0 */
    pop {r4, r5, r6, r7, r8, lr}        /* Restore the registers we kept */
    bx lr                       /* Leave main */

addr_of_message : .word message
addr_number_a_low: .word number_a_low
addr_number_a_high: .word number_a_high
addr_number_b_low: .word number_b_low
addr_number_b_high: .word number_b_high