#include "monty.h"

/**
 * _push - Push function
 * @head: Stack Head
 * @line_number: # line
 * Return: nothing
 */
void _push(stack_t **head, unsigned int line_number)
{
	char *token = NULL;
	int data = 0;
	(void)(line_number);

	token = strtok(NULL, " \t\n\r");
	data = comparedigit(token, line_number);
	add_dnodeint(head, data);
}
