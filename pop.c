#include "monty.h"
/**
 * pop - delete head node
 * @head: pointer to the head
 * @line_number: line number
 * Return: nothing
 */

void pop(stack_t **head, unsigned int line_number)
{
	stack_t *current = NULL;

	if (!(*head))
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		fclose(global.demo);
		exit(EXIT_FAILURE);
	}
	current = *head;
	*head = (*head)->next;
	free(current);

}
