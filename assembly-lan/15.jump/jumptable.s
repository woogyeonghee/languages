/* jumptable.s */
.data

.text

.globl main

main:
  cmp r0, #1                  /* r0 - 1 and update cpsr */
  blt case_default            /* branch to case_default if r0 < 1 */
  cmp r0, #3                  /* r0 - 3 and update cpsr */
  bgt case_default            /* branch to case_default if r0 > 3 */

  sub r0, r0, #1              /* r0 ← r0 - 1. Required to index the table */
  ldr r1, addr_of_jump_table  /* r1 ← &jump_table */
  ldr r1, [r1, +r0, LSL #2]   /* r1 ← *(r1 + r0*4).
                                 This is r1 ← jump_table[r0] */

  mov pc, r1                  /* pc ← r1
                                 This will cause a branch to the
                                 computed address */

  case_1:
   mov r0, #1                 /* r0 ← 1 */ 
   b after_switch             /* break */

  case_2:
   mov r0, #2                 /* r0 ← 2 */
   b after_switch             /* break */

  case_3:
   mov r0, #3                 /* r0 ← 3 */
   b after_switch             /* break */

  case_default:
   mov r0, #42                /* r0 ← 42 */
   b after_switch             /* break (unnecessary) */

  after_switch:

  bx lr                       /* Return from main */

.align 4
jump_table:
   .word case_1
   .word case_2
   .word case_3

.align 4
addr_of_jump_table: .word jump_table