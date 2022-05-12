#include "monty.h"

/**
 * _pchar - Prints the char at the top of the stack, followed by a new line.
 * @stack: Pointer to the beginning of the Linked List.
 * @line_number: Number of the Line.
 * Return: Void.
 **/
void _pchar(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
		_errors(15, line_number, stack);
	else if ((*stack)->n >= 0 && (*stack)->n <= 127)
		printf("%c\n", (*stack)->n);
	else
		_errors(16, line_number, stack);
}

