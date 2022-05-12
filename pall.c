#include "monty.h"

/**
 * _pall - Prints all the values on the stack, starting from the top.
 * @stack: Pointer to the beginning of the Linked List.
 * @line_number: Number of the Line.
 * Return: Void.
 **/
void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *aux = *stack;

	line_number += 0;

	while (aux != NULL)
	{
		printf("%d\n", aux->n);
		aux = aux->next;
	}
}

