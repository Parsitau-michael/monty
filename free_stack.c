#include "monty.h"

/**
 * _free - a function that frees the stack.
 * @stack: the stack to be freed.
 */
void _free(stack_t *stack)
{
	stack_t *temp;

	while (stack)
	{
		temp = stack;
		stack = stack->next;
		free(temp);
	}
}
