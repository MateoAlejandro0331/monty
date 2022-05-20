#include "monty.h"
/**
 * swap - swaps 2 elements of the stack
 * @line_number: value of new node
 * @head: double pointer to the first node
 */

void swap(stack_t **head, unsigned int line_number)
{
	stack_t *current = *head;
	stack_t *tmp;

	(void)(line_number);
	if (!(*head) || !((*head)->next))
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		free_list(*head);
		fclose(global.demo);
		exit(EXIT_FAILURE);
	}
	tmp = current->next;
	current->prev = current->next;
	current->next = tmp->next;
	tmp->prev = NULL;
	current->next = tmp->next;
	if (tmp->next)
		tmp->next->prev = current;
	tmp->next = current;
	current = current->prev;
}
