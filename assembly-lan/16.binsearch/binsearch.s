/* binsearch.s */
.data

.text

.globl main

main:

  cmp r0, #1              /* r0 - 1 and update cpsr */
  blt case_default        /* if r0 < 1 then branch to case_default */
  cmp r0, #10             /* r0 - 10 and update cpsr */
  bgt case_default        /* if r0 > 10 then branch to case default */

  case_1_to_10:
    cmp r0, #5            /* r0 - 5 and update cpsr */
    beq case_5            /* if r0 == 5 branch to case_5 */
    blt case_1_to_4       /* if r0 < 5 branch to case_1_to_4 */
    bgt case_6_to_10      /* if r0 > 5 branch to case_6_to_4 */

  case_1_to_4:
    cmp r0, #2            /* r0 - 2 and update cpsr */
    beq case_2            /* if r0 == 2 branch to case_2 */
    blt case_1            /* if r0 < 2 branch to case_1 
                             (case_1_to_1 does not make sense) */
    bgt case_3_to_4       /* if r0 > 2 branch to case_3_to_4 */

  case_3_to_4:
    cmp r0, #3            /* r0 - 3 and update cpsr */
    beq case_3            /* if r0 == 3 branch to case_3 */
    b case_4              /* otherwise it must be r0 == 4,
                             branch to case_4 */

  case_6_to_10:
    cmp r0, #8            /* r0 - 8 and update cpsr */
    beq case_8            /* if r0 == 8 branch to case_8 */
    blt case_6_to_7       /* if r0 < 8 then branch to case_6_to_7 */
    bgt case_9_to_10      /* if r0 > 8 then branch to case_9_to_10 */

  case_6_to_7:
    cmp r0, #6            /* r0 - 6 and update cpsr */
    beq case_6            /* if r0 == 6 branch to case_6 */
    b case_7              /* otherwise it must be r0 == 7,
                             branch to case 7 */

  case_9_to_10:
    cmp r0, #9            /* r0 - 9 and update cpsr */
    beq case_9            /* if r0 == 9 branch to case_9 */
    b case_10             /* otherwise it must be r0 == 10,
                             branch to case 10 */

  case_1:
     mov r0, #1
     b after_switch
  case_2:
     mov r0, #2
     b after_switch
  .
  .  /* Cases from 3 to 9 omitted */
  .
  case_10:
     mov r0, #10
     b after_switch

  case_default:
   mov r0, #42                /* r0 ← 42 */
   b after_switch             /* break (unnecessary) */

  after_switch:

  bx lr                       /* Return from main */