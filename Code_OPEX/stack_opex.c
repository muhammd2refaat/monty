#include "../monty.h"

/**
 * stack_OPEX - Handles the "stack" OPEX.
 * Return: None.
 * *********************************
 * Prototype: void stack_OPEX(stack_t **head, unsigned int counter);
 * *********************************
 * @head: Pointer to the top of the stack.
 * @theNumberOfTheLine: Current line number in the script file.
 * *********************************
 * Description: Adds a node to the stack.
 * *********************************
 *-
 */

void stack_OPEX(stack_t **head, unsigned int theNumberOfTheLine)
{
	/* Cast the head and theNumberOfTheLine as unused s*/
	/* to avoid compilation warnings */
	(void)head;
	(void)theNumberOfTheLine;
	/* Set the mode of the execution context to STACK (0 indicates stack mode) */
	montyExecutionContext.theMode = 0;
}
