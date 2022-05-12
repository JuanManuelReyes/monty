#include "monty.h"
/**
 * _push - Pushes an element to the stack.
 * @stack: Pointer to the beginning of the Linked List.
 * @line_number: Number of the Line.
 * Return: Void.
 **/
void _push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node = NULL;
	int atoied = 0, checker = 0; /*checks for argument only numbers*/

	line_number += 0;
	checker = _check_num(line_number, stack);/*0 if is not a num, else 1*/
	if (checker == 0)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		_free(stack, 1);
		exit(EXIT_FAILURE);
	}

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		_free(stack, 1);
		exit(EXIT_FAILURE);
	}

	new_node->next = NULL;
	new_node->prev = NULL;
	atoied = atoi(struc->argument);
	new_node->n = atoied;

	if (*stack != NULL)/*Stack is not empty */
	{
		(*stack)->prev = new_node;
		new_node->next = *stack;
		*stack = new_node;
	}
	*stack = new_node;
}
