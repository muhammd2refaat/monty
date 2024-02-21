/* Main header file for Monty interpreter */
#include "monty.h"
/* Function to release/free the stack */
#include "Stack/release_stack.c"
/* Handles the 'add' operation */
#include "Code_Opex/add_opex.c"
/* Handles the 'div' operation */
#include "Code_Opex/div_opex.c"
/* Handles the 'mod' operation */
#include "Code_Opex/mod_opex.c"
/* Handles the 'mul' operation */
#include "Code_Opex/mul_opex.c"
/* Handles the 'nop' operation (no operation) */
#include "Code_Opex/oop_opex.c"
/* Handles the 'pall' operation to print all values */
#include "Code_Opex/pall_opex.c"
/* Handles the 'pchar' operation to print char value */
#include "Code_Opex/pchar_opex.c"
/* Handles the 'pint' operation to print int value */
#include "Code_Opex/pint_opex.c"
/* Handles the 'pop' operation to remove top element */
#include "Code_Opex/pop_opex.c"
/* Handles the 'pstr' operation to print string */
#include "Code_Opex/pstr_opex.c"
/* Handles the 'push' operation to push value */
#include "Code_Opex/push_opex.c"
/* Handles the 'queue' operation to toggle stack/queue */
#include "Code_Opex/qu_opex.c"
/* Handles the 'rotl' operation to rotate stack left */
#include "Code_Opex/rotl_opex.c"
/* Handles the 'rotr' operation to rotate stack right */
#include "Code_Opex/rtor_opex.c"
/* Handles the 'stack' operation to toggle stack/queue */
#include "Code_Opex/stack_opex.c"
/* Handles the 'sub' operation to subtract top two elements */
#include "Code_Opex/sub_opex.c"
/* Handles the 'swap' operation to swap top two elements */
#include "Code_Opex/swap_opex.c"
/* Utility functions for adding nodes */
/* Function to add node to queue */
#include "Additional/A_nodeto_Queue.c"
/* Function to add to a node */
#include "Additional/A_to_node.c"
/* Function to select the appropriate operation */
#include "Functions/S_Functions.c"
