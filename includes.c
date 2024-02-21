/* Main header file for Monty interpreter */
#include "monty.h"
/* Function to release/free the stack */
#include "Stack/release_stack.c"
/* Handles the 'add' opex */
#include "Code_Opex/add_opex.c"
/* Handles the 'div' opex */
#include "Code_Opex/div_opex.c"
/* Handles the 'mod' opex */
#include "Code_Opex/mod_opex.c"
/* Handles the 'mul' opex */
#include "Code_Opex/mul_opex.c"
/* Handles the 'nop' opex (no opex) */
#include "Code_Opex/nop_opex.c"
/* Handles the 'pall' opex to print all values */
#include "Code_Opex/pall_opex.c"
/* Handles the 'pchar' opex to print char value */
#include "Code_Opex/pchar_opex.c"
/* Handles the 'pint' opex to print int value */
#include "Code_Opex/pint_opex.c"
/* Handles the 'pop' opex to remove top element */
#include "Code_Opex/pop_opex.c"
/* Handles the 'pstr' opex to print string */
#include "Code_Opex/pstr_opex.c"
/* Handles the 'push' opex to push value */
#include "Code_Opex/push_opex.c"
/* Handles the 'queue' opex to toggle stack/queue */
#include "Code_Opex/queue_opex.c"
/* Handles the 'rotl' opex to rotate stack left */
#include "Code_Opex/rotl_opex.c"
/* Handles the 'rotr' opex to rotate stack right */
#include "Code_Opex/rotr_opex.c"
/* Handles the 'stack' opex to toggle stack/queue */
#include "Code_Opex/stack_opex.c"
/* Handles the 'sub' opex to subtract top two elements */
#include "Code_Opex/sub_opex.c"
/* Handles the 'swap' opex to swap top two elements */
#include "Code_Opex/swap_opex.c"
/* Utility functions for adding nodes */
/* Function to add node to queue */
#include "Additional/A_Node_Queue.c"
/* Function to add to a node */
#include "Additional/A_To_Node.c"
/* Function to select the appropriate opex */
#include "Functions/S_Functions.c"
