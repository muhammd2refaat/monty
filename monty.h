#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdarg.h>
#include <unistd.h>

typedef char *String;
typedef char **StringArray;
typedef int Integer;
typedef unsigned long int ULI;

#define THE_DELIMITERS "\n "
#define READ "r"
#define ZERO 0
#define ONE 1
#define TWO 2
#define INCREASE_BY_ONE(x) (x++)
#define NEW_LINE "\n"
#define STACK "stack"
#define QUEUE "queue"
#define HASH '#'
#define NULL_VARIABLE(x) (x = NULL)
#define FREE_VARIABLE(x) free(x)
#define NULL_TERMINATOR '\0'
#define DASH '-'
#define unused(x) (void)(x)

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @codeOPEX: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *codeOPEX;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct MontyContext - Variables
 * @theArgument: Value associated with an instruction
 * @theFile: File stream for Monty script
 * @theBuffer: Buffer for storing a line from the Monty script file
 * @theMode: Mode indicator, representing a certain behavior
 * Description: Variables for stack, queues, LIFO, FIFO
 */
typedef struct MontyContext
{
	String theArgument;
	FILE *theFile;
	String theBuffer;
	Integer theMode;
}  MontyContext_t;

extern MontyContext_t montyExecutionContext;

int select_Function(
	String theBuffer, stack_t **stack,
	unsigned int theNumberOfTheLine, FILE *theFile
);

void release_stack(stack_t *top);
void addNodeToStack(stack_t **head, int ValueToBeAdded);
void push_OPEX(stack_t **head, unsigned int theNumberOfTheLine);
void pall_OPEX(stack_t **head, unsigned int theNumberOfTheLine);
void AddNodeToQueue(stack_t **head, int ValueToBeAdded);
void pint_OPEX(stack_t **head, unsigned int counter);
void pop_OPEX(stack_t **head, unsigned int theNumberOfTheLine);
void swap_OPEX(stack_t **head, unsigned int theNumberOfTheLine);
void add_OPEX(stack_t **head, unsigned int theNumberOfTheLine);
void nop_OPEX(stack_t **head, unsigned int theNumberOfTheLine);
void sub_OPEX(stack_t **head, unsigned int theNumberOfTheLine);
void div_OPEX(stack_t **head, unsigned int theNumberOfTheLine);
void mul_OPEX(stack_t **head, unsigned int theNumberOfTheLine);
void mod_OPEX(stack_t **head, unsigned int theNumberOfTheLine);
void pchar_OPEX(stack_t **head, unsigned int theNumberOfTheLine);
void pstr_OPEX(stack_t **head, unsigned int theNumberOfTheLine);
void rotl_OPEX(stack_t **head, unsigned int theNumberOfTheLine);
void rotr_OPEX(stack_t **head, unsigned int theNumberOfTheLine);
void queue_OPEX(stack_t **head, unsigned int theNumberOfTheLine);
void stack_OPEX(stack_t **head, unsigned int theNumberOfTheLine);

#endif
