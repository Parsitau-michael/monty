#include "monty.h"

/**
 * mod - a function that computes the rest of the division of the second
 * top element of the stack by the top element of the stack.
 *
 * @stack: a pointer to the top of the stack.
 * @line_num: the line number with the instruction.
 */
void mod(stack_t **stack, unsigned int line_num)
{
	stack_t *temp = *stack;
	int result = 0;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_num);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_num);
		exit(EXIT_FAILURE);
	}

	result = (*stack)->next->n % (*stack)->n;
	(*stack)->next->n = result;
	*stack = (*stack)->next;
	free(temp);
}
