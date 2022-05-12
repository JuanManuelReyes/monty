#include "monty.h"

/**
 * _check_num - Checks if the argument is a number.
 * @stack: Pointer to the beginning of the Linked List.
 * @line_number: Number of the Line.
 * Return: 1 if it is a number, else, returns 0.
 **/
int _check_num(unsigned int line_number, stack_t **stack)
{
	int i = 0;

	if (struc->argument == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		_free(stack, 1);
		exit(EXIT_FAILURE);
	}

	while (struc->argument[i] != '\0')
	{	/*Cheking if it'struc a letter and not equal to <->*/
		if ((struc->argument[i] < 48 || struc->argument[i] > 57) &&
			(struc->argument[i] != 45))
			return (0);
		i++;
	}
	return (1);
}

