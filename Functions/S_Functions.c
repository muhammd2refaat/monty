#include "../monty.h"

/**
 * select_Function - Selects and executes the appropriate
 * function based on the OPEX.
 * Return: 0 if successful, 1 if an unknown
 * instruction is encountered.
 * *********************************
 * Prototype: int select_Function(
 *	String theBuffer, stack_t **stack,
 *	unsigned int theNumberOfTheLine, FILE *theFile
 *);
 * *********************************
 * @theBuffer: Line read from the Monty script file.
 * @stack: Pointer to the top of the stack.
 * @theNumberOfTheLine: Current line number in the script file.
 * @theFile: Pointer to the Monty script file.
 * *********************************
 * Description: Parses the OPEX from theBuffer,
 * searches for a matching function,
 * and executes it. If the OPEX is not recognized,
 * prints an error message and exits.
 * *********************************
 *-
 */

int select_Function(
	String theBuffer, stack_t **stack,
	unsigned int theNumberOfTheLine, FILE *theFile)
{
	unsigned int theIndex = 0;	/* Initialize the index for the loop*/
	String OPEX;			/* Declare a variable to hold the OPEX name */
	char errorBuffer[50];		/* Buffer to store error messages */
	int numChars;			/* store the number of characters written to errorBuffer */
	/* Array of all supported functions and their corresponding OPEXs */
	instruction_t allTheFunctions[] = {
	    {"push", push_OPEX}, {"pall", pall_OPEX},
	    {"pint", pint_OPEX}, {"pop", pop_OPEX},
	    {"swap", swap_OPEX}, {"add", add_OPEX},
	    {"nop", nop_OPEX}, {"sub", sub_OPEX},
	    {"div", div_OPEX}, {"mul", mul_OPEX},
	    {"mod", mod_OPEX}, {"pchar", pchar_OPEX},
	    {"pstr", pstr_OPEX}, {"rotl", rotl_OPEX},
	    {"rotr", rotr_OPEX}, {"queue", queue_OPEX},
	    {"stack", stack_OPEX}, {NULL, NULL}
	};	/* Tokenize the buffer to get the OPEX name */
	OPEX = strtok(theBuffer, THE_DELIMITERS);
	if (OPEX && OPEX[ZERO] == HASH)
		return (ZERO);
	montyExecutionContext.theArgument = strtok(NULL, THE_DELIMITERS);
	/* Loop through all OPEXs */
	while (allTheFunctions[theIndex].codeOPEX && OPEX)
	{	/* If the OPEX matches, execute the corresponding function */
		if (strcmp(OPEX, allTheFunctions[theIndex].codeOPEX) == ZERO)
		{	/* Execute OPEX function */
			allTheFunctions[theIndex].f(stack, theNumberOfTheLine);
			return (ZERO);	/* Return success */
		} /* Increment the index for the next itex*/
		INCREASE_BY_ONE(theIndex);
	}	/* If no OPEX is found */
	if (OPEX && allTheFunctions[theIndex].codeOPEX == NULL)
	{	/* Print error message to error buffer */
		numChars = sprintf(errorBuffer, "L%d: unknown instruction %s\n",
		theNumberOfTheLine, OPEX);
		write(STDERR_FILENO, errorBuffer, numChars);/* Write error message to s-r*/
		fclose(theFile);		/* Close the script file */
		free(theBuffer);		/* Free the buffer allocated for the line */
		release_stack(*stack);	/* Release the stack */
		exit(EXIT_FAILURE);	/* Exit with failure*/
	} return (ONE);	/* Return failure if no OPEX was executed */
}
