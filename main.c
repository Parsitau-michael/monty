#include "monty.h"
/**
 * main - Entry point.
 *
 * @argc: the number of arguments passed to the main.
 * @argv: an array of arguments passed to the main.
 * Return: 0 0n success.
 */
int main(int argc, char *argv[])
{
	FILE *fd;
	char *line = NULL;
	size_t len = 0;
	unsigned int line_num = 0;
	stack_t *stack = {NULL};

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		fd = fopen(argv[1], "r");
		if (fd == NULL)
		{
			fprintf(stderr, "Error: Can't open file %s", argv[1]);
			exit(EXIT_FAILURE);
		}
		while (getline(&line, &len, fd) != -1)
		{
			line_num++;
			handleop(&stack, line, line_num);
		}
		free(line);
		fclose(fd);
		_free(stack);
		exit(EXIT_SUCCESS);
	}
}
