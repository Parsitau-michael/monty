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
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_num);
		exit(EXIT_FAILURE);
	}
	else if ((*stack)->n < 0 || (*stack)->n > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_num);
		exit(EXIT_FAILURE);
	}

	printf("%c\n", (char)(*stack)->n);
}
