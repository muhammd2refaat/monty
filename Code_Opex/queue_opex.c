#include "../monty.h"

/**
 * queue_opex - Handles the "queue" opex.
 * Return: None.
 * --------------------------
 * Prototype: void queue_opex(stack_t **head, unsigned int counter);
 * --------------------------
 * @head: Pointer to the top of the stack.
 * @theNumberOfTheLine: Current line number in the script file.
 * --------------------------
 * Description: Adds a node to the queue.
 * --------------------------
 *-
 */

void queue_opex(stack_t **head, unsigned int theNumberOfTheLine)
{
	/* Cast the head pointer to void to suppress unused variable warning */
	(void)head;
	/* Cast theNumberOfTheLine to void to suppress unused variable warning */
	(void)theNumberOfTheLine;
	/* Set the execution mode to stack (LIFO) */
	montyExecutionContext.theMode = 1;
}
