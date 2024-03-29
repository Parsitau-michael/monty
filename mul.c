#include "monty.h"

/**
 * mul - a function that multiplies the second top element of the stack
 * with the top element of the stack.
 *
 * @stack: a pointer to the top of the stack.
 * @line_num: the line number with the instruction.
 */
void mul(stack_t **stack, unsigned int line_num)
{
	stack_t *temp = *stack;
	int result = 0;

	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_num);
		exit(EXIT_FAILURE);
	}

	result = (*stack)->next->n * (*stack)->n;
	(*stack)->next->n = result;
	*stack = (*stack)->next;
	free(temp);
}
