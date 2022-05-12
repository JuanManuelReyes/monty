#include "monty.h"

/**
 * _rotr - Rotates the stack to the bottom.
 * @stack: Pointer to the beginning of the Linked List.
 * @line_number: Number of the Line.
 * Return: Void.
 **/
void _rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *aux = *stack;

	(void)line_number;

	if (*stack == NULL || aux->next == NULL)
		return;

	if ((*stack)->next != NULL)
	{
		while (aux->next != NULL)
			aux = aux->next;

		(*stack)->prev = aux;
		aux->next = *stack;
		aux->prev->next = NULL;
		aux->prev = NULL;
		*stack = (*stack)->prev;
	}
}
