#include "monty.h"
/**
 * _pop - Removes the top element of the stack.
 * @stack: Pointer to the beginning of the Linked List.
 * @line_number: Number of the Line.
 * Return: Void.
 **/
void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *aux = NULL;

	if (*stack != NULL)
	{
		if ((*stack)->next != NULL)
		{
			aux = (*stack)->next;
			free(*stack);
			aux->prev = NULL;
			*stack = aux;
		}
		else
		{
			free(*stack);
			*stack = NULL;
		}
	}
	else
		_errors(7, line_number, stack);
}

