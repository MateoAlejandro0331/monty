#include "monty.h"
/**
 * _pall - print all the  list
 * @head: pointer to the head
 * @line_number: line number of code
 * Return: nothing
 */
void _pall(stack_t **head, unsigned int line_number)
{
	stack_t *current = NULL;
	(void)(line_number);

	current = *head;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
