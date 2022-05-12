#include "monty.h"

/**
 * _pint - Prints the value at the top of the stack, followed by a new line.
 * @stack: Pointer to the beginning of the Linked List.
 * @line_number: Number of the Line.
 * Return: Void.
 **/
void _pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
		_errors(6, line_number, stack);

	printf("%d\n", (*stack)->n);
}

