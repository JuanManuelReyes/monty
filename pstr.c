#include "monty.h"

/**
 * _pchar - Prints the char at the top of the stack, followed by a new line.
 * @stack: Pointer to the beginning of the Linked List.
 * @line_number: Number of the Line.
 * Return: Void.
 **/
void _pstr(stack_t **stack, unsigned int line_number)
{
        (void)line_number;

	if (*stack == NULL || stack == NULL)
	{
                printf("\n");
		return;
        }
        else
        {
                while (*stack != NULL && (*stack)->n != 0)
                {
                        if ((*stack)->n >= 1 && (*stack)->n <= 127)
		                printf("%c\n", (*stack)->n);
                        else
                                break;
                        
                        *stack = (*stack)->next;
                }
                printf("\n");
        }
}