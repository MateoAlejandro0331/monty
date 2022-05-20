#ifndef _MONTY_H_
#define _MONTY_H_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <ctype.h>

/* --------- */
/* FUNCTIONS */
/* --------- */

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
 * struct global_variables - struct to manage the global variables
 * @demo: variable to store the file
 * @head: pointer to the head of the list
 * Description: variable
 */
typedef struct global_variables
{
	FILE *demo;
	stack_t *head;
} global_variable;
/* ------------------- */
/* FUNCTION PROTOTYPES */
/* ------------------- */
extern global_variable global;
int main(int argc, char *argv[]);
void _pall(stack_t **head, unsigned int n);
void _push(stack_t **head, unsigned int n);
stack_t *add_dnodeint(stack_t **head, int n);
void (*get_op_func(char *s))(stack_t **stack, unsigned int line_number);
int comparedigit(char *s, unsigned int line_number);
void free_list(stack_t *head);
void pint(stack_t **head, unsigned int line_number);
void _swap(stack_t **head, unsigned int line_number);
#endif
