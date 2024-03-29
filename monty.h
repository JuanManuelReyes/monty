#ifndef MONTY_H
#define MONTY_H

/*Libraries*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct global_vars - contains variables to be used as global
 * @argument: the argument of the opcode
 * @line: buffer in which saved each line of the open file
 * @file_desc: file descriptor
 * Description: helps to use variables through different filesstackstack
 * for stack, queues, LIFO, FIFO
 */
typedef struct global_vars
{
	char *argument;
	char *line;
	FILE *file_desc;
} global_vars;

/*External Variables*/
global_vars *struc;

/*Main Prototype*/
int main(int argc, char *argv[]);

/*Proyect Prototyoes*/
void _push(stack_t **stack, unsigned int line_number);
void _pall(stack_t **stack, unsigned int line_number);
void _pint(stack_t **stack, unsigned int line_number);
void _pop(stack_t **stack, unsigned int line_number);
void _swap(stack_t **stack, unsigned int line_number);
void _add(stack_t **stack, unsigned int line_number);
void _nop(stack_t **stack, unsigned int line_number);
void _sub(stack_t **stack, unsigned int line_number);
void _div(stack_t **stack, unsigned int line_number);
void _mul(stack_t **stack, unsigned int line_number);
void _mod(stack_t **stack, unsigned int line_number);
void _pchar(stack_t **stack, unsigned int line_number);
void _pstr(stack_t **stack, unsigned int line_number);
void _rotl(stack_t **stack, unsigned int line_number);
void _rotr(stack_t **stack, unsigned int line_number);


/*Extra Prototypes*/
void _free(stack_t **stack, int flag);
int _check_num(unsigned int line_number, stack_t **stack);
stack_t *get_op_func(stack_t **stack, char *op_code, unsigned int line_number);

#endif

