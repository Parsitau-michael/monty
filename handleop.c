#include "monty.h"
/**
 * handleop - a function that handles opcodes.
 * @stack: a pointer to the stack.
 * @line: an array of arguments passed to the main.
 * @line_num: the line number with the instruction.
 */
void handleop(stack_t **stack, char *line, unsigned int line_num)
{
	char *token = NULL;
	int i;

	instruction_t func_codes[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"nop", nop},
		{"add", add},
		{"sub", sub},
		{"div", _div},
		{"mul", mul},
		{"mod", mod},
		{NULL, NULL}
	};

	token = strtok(line, " \n\t");
	if (token != NULL)
	{
		for (i = 0; func_codes[i].opcode; i++)
		{
			if (strcmp(token, func_codes[i].opcode) == 0)
			{
				func_codes[i].f(stack, line_num);
				return;
			}

		}
		fprintf(stderr, "L%d: unknown instruction %s\n", line_num, token);
		exit(EXIT_FAILURE);
	}
}
