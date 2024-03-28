#include "monty.h"

/**
 * pstr - a function that prints the string starting at the top of the stack,
 * followed by a new line.
 *
 * @stack: a pointer to the stack.
 * @line_num: the line number with the instructions.
 */
void pstr(stack_t **stack, unsigned int line_num)
{
	stack_t *temp = *stack;

	if (temp == NULL)
	{
		printf("\n");
		return;
	}

	while (temp != NULL && temp->n != 0 && temp->n >= 0 && temp->n <= 127)
	{
		printf("%c", (char)temp->n);
		temp = temp->next;
	}
	printf("\n");
}
