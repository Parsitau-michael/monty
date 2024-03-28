#include "monty.h"

/**
 * pop - a function that removes the top element of the stack.
 *
 * @stack: a pointer to the top of a stack.
 * @line_num: the number of the line with the instruction.
 */
void pop(stack_t **stack, unsigned int line_num)
{
	stack_t *curr = *stack;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_num);
		exit(EXIT_FAILURE);
	}

	*stack = (*stack)->next;
	free(temp);
}
