#include "monty.h"

/**
 * _mul - Multiplies the second top element of the stack with the top element.
 * @stack: Pointer to the beginning of the Linked List.
 * @line_number: Number of the Line.
 * Return: Void.
 **/
void _mul(stack_t **stack, unsigned int line_number)
{
	stack_t *aux = NULL;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		free(stack, 1);
		exit(EXIT_FAILURE);
	}
	else
	{
		aux = (*stack)->next;
		aux->n = aux->n * (*stack)->n;
		free(*stack);
		aux->prev = NULL;
		*stack = aux;
	}
}

