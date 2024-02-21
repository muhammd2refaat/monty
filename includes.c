/* Main header file for Monty interpreter */
#include "monty.h"
/* Function to release/free the stack */
#include "Stack/release_stack.c"
/* Handles the 'add' OPEX */
#include "Code_OPEX/add_opex.c"
/* Handles the 'div' OPEX */
#include "Code_OPEX/div_opex.c"
/* Handles the 'mod' OPEX */
#include "Code_OPEX/mod_opex.c"
/* Handles the 'mul' OPEX */
#include "Code_OPEX/mul_opex.c"
/* Handles the 'nop' OPEX (no OPEX) */
#include "Code_OPEX/nop_opex.c"
/* Handles the 'pall' OPEX to print all values */
#include "Code_OPEX/pall_opex.c"
/* Handles the 'pchar' OPEX to print char value */
#include "Code_OPEX/pchar_opex.c"
/* Handles the 'pint' OPEX to print int value */
#include "Code_OPEX/pint_opex.c"
/* Handles the 'pop' OPEX to remove top element */
#include "Code_OPEX/pop_opex.c"
/* Handles the 'pstr' OPEX to print string */
#include "Code_OPEX/pstr_opex.c"
/* Handles the 'push' OPEX to push value */
#include "Code_OPEX/push_opex.c"
/* Handles the 'queue' OPEX to toggle stack/queue */
#include "Code_OPEX/queue_opex.c"
/* Handles the 'rotl' OPEX to rotate stack left */
#include "Code_OPEX/rotl_opex.c"
/* Handles the 'rotr' OPEX to rotate stack right */
#include "Code_OPEX/rotr_opex.c"
/* Handles the 'stack' OPEX to toggle stack/queue */
#include "Code_OPEX/stack_opex.c"
/* Handles the 'sub' OPEX to subtract top two elements */
#include "Code_OPEX/sub_opex.c"
/* Handles the 'swap' OPEX to swap top two elements */
#include "Code_OPEX/swap_opex.c"
/* Utility functions for adding nodes */
/* Function to add node to queue */
#include "Additional/A_Node_Queue.c"
/* Function to add to a node */
#include "Additional/A_To_Node.c"
/* Function to select the appropriate OPEX */
#include "Functions/S_Functions.c"
