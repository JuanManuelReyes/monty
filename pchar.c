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
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		_free(stack, 1);
		exit(EXIT_FAILURE);
	}
	else if ((*stack)->n >= 0 && (*stack)->n <= 127)
		printf("%c\n", (*stack)->n);
	else
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		_free(stack, 1);
		exit(EXIT_FAILURE);
	}
}

