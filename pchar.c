#include "monty.h"

/**
 * pchar - a function that prints the char at the top of the stack,
 * followed by a new line.
 *
 * @stack: a pointer to the stack.
 * @line_num: the line number with the instructions.
 */
void pchar(stack_t **stack, unsigned int line_num)
{
	stack_t *temp = *stack;

	if (temp == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_num);
		exit(EXIT_FAILURE);
	}
	if ((temp)->n < 0 || (temp)->n > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_num);
		exit(EXIT_FAILURE);
	}

	printf("%c\n", (char)(temp)->n);
}
