#include "monty.h"
/**
 * add_dnodeint - function
 *
 * @head: head function
 * @n: data to node
 * Return: Stack
 */
stack_t *add_dnodeint(stack_t **head, int n)
{
	stack_t *new_node = NULL;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_list(global.head);
		fclose(global.demo);
		exit(EXIT_FAILURE);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	*head = new_node;
	if (new_node->next != NULL)
		(new_node->next)->prev = new_node;
	return (new_node);
}
/**
 * comparedigit - compare if is digit
 * @s: string to compare
 * @line_number: line of code
 * Return: int digit
 */
int comparedigit(char *s, unsigned int line_number)
{
	int i, digit = 0;

	if (!s)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		free_list(global.head);
		fclose(global.demo);
		exit(EXIT_FAILURE);
	}
	for (i = 0; s[i]; i++)
		if (s[i] >= 65 && s[i] <= 122)
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			free_list(global.head);
			fclose(global.demo);
			exit(EXIT_FAILURE);
		}
		digit = atoi(s);
		return (digit);
}
/**
 * free_list - free list
 * @head: pointer to the head
 * Return: nothing
 */
void free_list(stack_t *head)
{
	stack_t *aux;

	while (head)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
