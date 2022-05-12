#include "monty.h"

/**
 * _swap - Swaps the top two elements of the stack.
 * @stack: Pointer to the beginning of the Linked List.
 * @line_number: Number of the Line.
 * Return: Void.
 **/
void _swap(stack_t **stack, unsigned int line_number)
{
	int aux = 0;

	if (*stack == NULL || (*stack)->next == NULL)
		_errors(8, line_number, stack);
	else
	{
		aux = (*stack)->n;
		(*stack)->n = (*stack)->next->n;
		(*stack)->next->n = aux;
	}
}

