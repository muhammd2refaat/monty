#include "../monty.h"

/**
 * select_Function - Selects and executes the appropriate
 * function based on the opex.
 * Return: 0 if successful, 1 if an unknown
 * instruction is encountered.
 * --------------------------
 * Prototype: int select_Function(
 *	String theBuffer, stack_t **stack,
 *	unsigned int theNumberOfTheLine, FILE *theFile
 *);
 * --------------------------
 * @theBuffer: Line read from the Monty script file.
 * @stack: Pointer to the top of the stack.
 * @theNumberOfTheLine: Current line number in the script file.
 * @theFile: Pointer to the Monty script file.
 * --------------------------
 * Description: Parses the opex from theBuffer,
 * searches for a matching function,
 * and executes it. If the opex is not recognized,
 * prints an error message and exits.
 * --------------------------
 *-
 */

int select_Function(
	String theBuffer, stack_t **stack,
	unsigned int theNumberOfTheLine, FILE *theFile)
{
	unsigned int theIndex = 0;	/* Initialize the index for the loop*/
	String opex;			/* Declare a variable to hold the opex name */
	char errorBuffer[50];		/* Buffer to store error messages */
	int numChars;			/* store the number of characters written to errorBuffer */
	/* Array of all supported functions and their corresponding opexs */
	instruction_t allTheFunctions[] = {
	    {"push", push_opex}, {"pall", pall_opex},
	    {"pint", pint_opex}, {"pop", pop_opex},
	    {"swap", swap_opex}, {"add", add_opex},
	    {"nop", nop_opex}, {"sub", sub_opex},
	    {"div", div_opex}, {"mul", mul_opex},
	    {"mod", mod_opex}, {"pchar", pchar_opex},
	    {"pstr", pstr_opex}, {"rotl", rotl_opex},
	    {"rotr", rotr_opex}, {"queue", queue_opex},
	    {"stack", stack_opex}, {NULL, NULL}
	};	/* Tokenize the buffer to get the opex name */
	opex = strtok(theBuffer, THE_DELIMITERS);
	if (opex && opex[ZERO] == HASH)
		return (ZERO);
	montyExecutionContext.theArgument = strtok(NULL, THE_DELIMITERS);
	/* Loop through all opexs */
	while (allTheFunctions[theIndex].codeOpex && opex)
	{	/* If the opex matches, execute the corresponding function */
		if (strcmp(opex, allTheFunctions[theIndex].codeOpex) == ZERO)
		{	/* Execute opex function */
			allTheFunctions[theIndex].f(stack, theNumberOfTheLine);
			return (ZERO);	/* Return success */
		} /* Increment the index for the next itex*/
		INCREASE_BY_ONE(theIndex);
	}	/* If no opex is found */
	if (opex && allTheFunctions[theIndex].codeOpex == NULL)
	{	/* Print error message to error buffer */
		numChars = sprintf(errorBuffer, "L%d: unknown instruction %s\n",
		theNumberOfTheLine, opex);
		write(STDERR_FILENO, errorBuffer, numChars);/* Write error message to s-r*/
		fclose(theFile);		/* Close the script file */
		free(theBuffer);		/* Free the buffer allocated for the line */
		release_stack(*stack);	/* Release the stack */
		exit(EXIT_FAILURE);	/* Exit with failure*/
	} return (ONE);	/* Return failure if no opex was executed */
}
