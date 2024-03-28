#include "monty.h"

/**
 * swap - a function that swaps the top two elements of the stack.
 *
 * @stack: a pointer to the top of a stack.
 * @line_num: the line number with the instruction.
 */
void swap(stack_t **stack, unsigned int line_num)
{
	int temp_data;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_num);
		exit(EXIT_FAILURE);
	}

	temp_data = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = temp_data;
}
