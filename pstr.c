#include "monty.h"

/**
 * _pstr - Prints the string that starts at the top of the stack.
 * @stack: Pointer to the beginning of the Linked List.
 * @line_number: Number of the Line.
 * Return: Void.
 **/
void _pstr(stack_t **stack, unsigned int __attribute__((unused)) line_number)
{
	(void)line_number;

	stack_t *aux = *stack;

	if (*stack == NULL || stack == NULL || aux == NULL)
	{
		printf("\n");
		return;
	}
	else
	{
		while (aux != NULL && aux->n != 0)
		{
			if (aux->n >= 1 && aux->n <= 127)
				printf("%c", aux->n);
			else
				break;

			aux = aux->next;
		}
		printf("\n");
	}
}
