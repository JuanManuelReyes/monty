#include "monty.h"

/**
 * _free - frees memory allocation
 * @stack: pointer to the top of the stack
 * @flag: flag that determine which memory allocation to free
 * Return: void
 */
void _free(stack_t **stack, int flag)
{
	stack_t *tmp = *stack;

	while (*stack != NULL)
	{
		tmp = tmp->next;
		free(*stack);
		*stack = tmp;
	}
	if (flag == 1)
	{
		free(struc->line);/* Buffer from getline() */
		fclose(struc->file_desc);
		free(struc);
	}
}

