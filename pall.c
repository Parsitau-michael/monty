#include "monty.h"

/**
 * pall - a function that prints all the values on a stack,
 * starting from the top.
 *
 * @stack: a pointer to the top of a stack.
 * @line_num: the line number with the instructions.
 */
void pall(struct_t **stack, unsigned int line_num)
{
	(void)line_num;

	while (*stack)
	{
		printf("%d\n", *stack->n);
		*stack = (*stack)->next;
	}
}
