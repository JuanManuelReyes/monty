#include "monty.h"

/**
 * get_op_func - Searchs for the operation code.
 * @stack: Pointer to the beginning of the Linked List.
 * @op_code: opcode of the line.
 * @line_number: Number of the Line.
 * Return: pointer to a stack_t doubly linked list
 **/
stack_t *get_op_func(stack_t **stack, char *op_code, unsigned int line_number)
{
	int i = 0;

	instruction_t functions[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},
		{"sub", _sub},
		{"div", _div},
		{"mul", _mul},
		{"mod", _mod},
		{"pchar", _pchar},
		{"pstr", _pstr},
		{"rotl", _rotl},
		{"rotr", _rotr}.
		{NULL, NULL}
	};
	while (functions[i].opcode != NULL)
	{
		if (strcmp(functions[i].opcode, op_code) == 0)
		{
			functions[i].f(&(*stack), line_number);
			break;
		}
		i++;
	}
	if (i == 15)/*Is the {NULL, NULL} position*/
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_number, op_code);
		if (stack != NULL)
			_free(stack, 0);

		free(struc->line);
		fclose(struc->file_desc);
		free(struc);
		exit(EXIT_FAILURE);
	}
	return (*stack);
}

