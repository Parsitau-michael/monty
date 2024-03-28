#include "monty.h"

/**
 * pint - a function to print the value at the top of the stack.
 *
 * @stack: a pointer to the stack.
 * @line_num: the line number with the instructions.
 */
void pint(stack_t **stack, unsigned int line_num)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_num);
		exit(EXIT_FAILURE);
	}
	else
	{
		printf("%d\n", (*stack)->n);
	}
}
