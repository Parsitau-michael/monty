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
	char *token;
	stack_t *new_node;

	token = strtok(NULL, " \n\t");

	if (!token)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_num);
		exit(EXIT_FAILURE);
	}

	value = atoi(token);

	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		perror("Error: malloc failed");
		exit(EXIT_FAILURE);
	}

	new_node->n = value;
	new_node->next = *stack;
	*stack = new_node;
}
