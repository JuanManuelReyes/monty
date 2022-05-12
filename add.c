#include "monty.h"

/**
 * _add - Add the top two element of the stack.
 * @stack: Pointer to the beginning of the Linked List.
 * @line_number: Number of the Line.
 * Return: Void.
 **/
void _add(stack_t **stack, unsigned int line_number)
{
	stack_t *aux = NULL;

	if (*stack == NULL || (*stack)->next == NULL)
		_errors(9, line_number, stack);
	else
	{
		aux = (*stack)->next;
		aux->n = aux->n + (*stack)->n;
		free(*stack);
		aux->prev = NULL;
		*stack = aux;
	}
}

