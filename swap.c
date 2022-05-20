#include "monty.h"
/**
 * swap - swaps 2 elements of the stack
 * @line_number: value of new node
 * @head: double pointer to the first node
 */

void _swap(stack_t **head, unsigned int line_number)
{
	int temp;

	printf("entra al swap pasa");

	(void)(line_number);
	if (!(*head) || !((*head)->next))
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		free_list(*head);
		fclose(global.demo);
		exit(EXIT_FAILURE);
	}
	temp = (*head)->n;
	if ((*head)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		free_list(*head);
		exit(EXIT_FAILURE);
	}

	(*head)->n = (*head)->next->n;
	(*head)->next->n = temp;	
}
