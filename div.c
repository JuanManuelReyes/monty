#include "monty.h"

/**
 * _div - Divides the second top element of the stack by the top element.
 * @stack: Pointer to the beginning of the Linked List.
 * @line_number: Number of the Line.
 * Return: Void.
 **/
void _div(stack_t **stack, unsigned int line_number)
{
	stack_t *aux = NULL;

	if (*stack == NULL || (*stack)->next == NULL)
		_errors(11, line_number, stack);
	else
	{
		if ((*stack)->n == 0)
			_errors(12, line_number, stack);

		aux = (*stack)->next;
		aux->n = aux->n / (*stack)->n;
		free(*stack);
		aux->prev = NULL;
		*stack = aux;
	}
}

