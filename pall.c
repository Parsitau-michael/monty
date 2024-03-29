#include "monty.h"

/**
 * pall - a function that prints all the values on a stack,
 * starting from the top.
 *
 * @stack: a pointer to the top of a stack.
 * @line_num: the line number with the instructions.
 */
void pall(stack_t **stack, unsigned int line_num)
{
	stack_t *curr = *stack;
	(void)line_num;

	while (curr)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
	}
}
