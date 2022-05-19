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
        return (NULL);
    new_node->n = n;
    new_node->prev = NULL;
    new_node->next = *head;
    *head = new_node;
    if (new_node->next != NULL)
       (new_node->next)->prev = new_node;
    return (new_node);
}
/**
 * @brief 
 * 
 * @param s 
 * @param line_number 
 * @return int 
 */
int comparedigit( char *s, unsigned int line_number)
{
    int i, digit = 0;

    for (i = 0; s[i]; i++)
        if (s[i] >= 65 && s[i] <= 122)
        {
            fprintf(stderr, "L%d: usage: push integer\n", line_number);
            fclose(demo);
            exit(EXIT_FAILURE);
        }
    digit = atoi(s);
    return (digit);
}
/**
 * free_dlistint - free list
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