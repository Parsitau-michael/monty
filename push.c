#include "monty.h"

/**
 * push - a function that pushes an element to the stack.
 *
 * @stack: a pointer to the stack.
 * @line_num: the line number containing the instruction.
 */
void push(stack_t **stack, unsigned int line_num)
{
	int value;

	value = atoi(strtok(NULL, " \n"));

	if (!value)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_num);
		exit(EXIT_FAILURE);
	}

	stack_t *new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		perror("Error: malloc failed");
		exit(EXIT_FAILURE);
	}

	new_node->n = value;
	new_node->next = *stack;
	*stack = new_node;
}
