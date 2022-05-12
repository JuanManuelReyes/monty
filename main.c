#include "monty.h"
#include <stdio.h>

/**
 * main - monty main function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: void
 */
int main(int argc, char *argv[])
{
	unsigned int line_number = 1;
	char *line = NULL, *name, *token;
	size_t length = 0;
	ssize_t read;
	FILE *file_desc;
	stack_t *stack = NULL;

	if (argc != 2)
		_errors(1, line_number, &stack);
	name = argv[1];
	file_desc = fopen(argv[1], "r");
	if (file_desc == NULL)/*ERROR case 2*/
	{
		fprintf(stderr, "Error: Can't open file %s\n", name);
		exit(EXIT_FAILURE);
	}
	struc = malloc(sizeof(global_vars));
	struc->file_desc = file_desc;
	if (struc == NULL)
		fprintf(stderr, "Error: malloc failed\n");
	while ((read = getline(&line, &length, file_desc)) != -1)
	{
		token = strtok(line, "\n\t $");
		if (token[0] == '#')
			continue;
		struc->argument = strtok(NULL, "\n\t $");
		struc->line = line;
		if (token != NULL)
			stack = get_op_func(&stack, token, line_number);
		line_number++;
	}
	fclose(file_desc);
	if (struc->line != NULL)
		free(struc->line);
	free(struc);
	if (stack != NULL)
		_free(&stack, 0);
	exit(EXIT_SUCCESS);
}
