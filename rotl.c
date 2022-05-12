#include "monty.h"

/**
 * _rotl - Rotates the stack to the top.
 * @stack: Pointer to the beginning of the Linked List.
 * @line_number: Number of the Line.
 * Return: Void.
 **/
void _rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *aux = *stack;

	if (*stack == NULL || aux->next == NULL)
		return;

	if ((*stack)->next != NULL)
	{
		aux = *stack;

		while (aux->next != NULL)
			aux = aux->next;

		aux->next = *stack;
		(*stack)->prev = aux;
		(*stack)->next->prev = NULL;
		*stack = (*stack)->next;
		aux->next->next = NULL;
	}
}

