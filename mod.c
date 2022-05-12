#include "monty.h"

/**
 * _mod - Rest of the division of the second top element by the top element.
 * @stack: Pointer to the beginning of the Linked List.
 * @line_number: Number of the Line.
 * Return: Void.
 **/
void _mod(stack_t **stack, unsigned int line_number)
{
	stack_t *aux = NULL;

	if (*stack == NULL || (*stack)->next == NULL)
		_errors(14, line_number, stack);
	else
	{
		if ((*stack)->n == 0)
			_errors(12, line_number, stack);

		aux = (*stack)->next;
		aux->n = aux->n % (*stack)->n;
		free(*stack);
		aux->prev = NULL;
		*stack = aux;
	}
}

