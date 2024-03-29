#include "monty.h"
extern stack_t *stack;
/*
 * handleop - a function that handles opcodes.
 * @argv: an array of arguments passed to the main.
 */
void handleop(char *argv[])
{
	FILE *fd;
	char *line = NULL;
	size_t len = 0;
	unsigned int line_num = 0;
	char *token = NULL;
	int i;

	stack_t *stack = {NULL};
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

	fd = fopen(argv[1], "r");
	if (fd == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (getline(&line, &len, fd) != -1)
	{
		line_num++;
		token = strtok(line, " \n\t");
		if (token != NULL)
			for (i = 0; func_codes[i].opcode; i++)
				if (strcmp(token, func_codes[i].opcode) == 0)
					func_codes[i].f(&stack, line_num);
	}
	free(line);
	fclose(fd);
}
