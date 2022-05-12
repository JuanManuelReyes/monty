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
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		free(stack, 1);
		exit(EXIT_FAILURE);
	}
	else
	{
		if ((*stack)->n == 0)
		{
			fprintf(stderr, "L%d: division by zero\n", line_number);
			free(stack, 1);
			exit(EXIT_FAILURE);
		}

		aux = (*stack)->next;
		aux->n = aux->n % (*stack)->n;
		free(*stack);
		aux->prev = NULL;
		*stack = aux;
	}
}

