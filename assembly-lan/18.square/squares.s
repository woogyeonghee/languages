/* squares.s */
.data

.align 4
message: .asciz "Sum of 1^2 + 2^2 + 3^2 + 4^2 + 5^2 is %d\n"

.text

sq:
  <<defined above>>

sq_sum5:
  <<defined above>>

.globl main

main:
    push {r4, lr}          /* Keep callee-saved registers */

    /* Prepare the call to sq_sum5 */
    mov r0, #1             /* Parameter a ← 1 */
    mov r1, #2             /* Parameter b ← 2 */
    mov r2, #3             /* Parameter c ← 3 */
    mov r3, #4             /* Parameter d ← 4 */

    /* Parameter e goes through the stack,
       so it requires enlarging the stack */
    mov r4, #5             /* r4 ← 5 */
    sub sp, sp, #8         /* Enlarge the stack 8 bytes,
                              we will use only the
                              topmost 4 bytes */
    str r4, [sp]           /* Parameter e ← 5 */
    bl sq_sum5             /* call sq_sum5(1, 2, 3, 4, 5) */
    add sp, sp, #8         /* Shrink back the stack */

    /* Prepare the call to printf */
    mov r1, r0             /* The result of sq_sum5 */
    ldr r0, address_of_message
    bl printf              /* Call printf */

    pop {r4, lr}           /* Restore callee-saved registers */
    bx lr


address_of_message: .word message