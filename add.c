#include "monty.h"

/**
 * add - a function that adds the top two elements of the stack.
 *
 * @stack: a pointer to the top of the stack.
 * @line_num: the line number with the instruction.
 */
void add(stack_t **stack, unsigned int line_num)
{
	stack_t *temp = *stack;
	int result = 0;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_num);
		exit(EXIT_FAILURE);
	}

	result = (*stack)->n + (*stack)->next->n;
	(*stack)->next->n = result;
	*stack = (*stack)->next;
	free(temp);
}
