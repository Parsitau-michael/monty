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
	if (argc != 2)
	{
		perror("USAGE: monty file");
		exit(EXIT_FAILURE);
	}

	handleop(argv);

	exit(EXIT_SUCCESS);
}
