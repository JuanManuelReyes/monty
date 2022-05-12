#include "monty.h"
/**
 * _sub - execute sub opcode
 * @stack: Pointer to the beginning of the Linked List.
 * @line_number: Number of the Line.
 * Return: Void.
 **/
void _sub(stack_t **stack, unsigned int line_number)
{
	stack_t *aux = NULL;

	if (*stack == NULL || (*stack)->next == NULL)
		_errors(10, line_number, stack);
	else
	{
		aux = (*stack)->next;
		aux->n = aux->n - (*stack)->n;
		free(*stack);
		aux->prev = NULL;
		*stack = aux;
	}
}

