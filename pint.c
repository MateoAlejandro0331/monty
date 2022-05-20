#include "monty.h"
/**
 * pint - print just the top of the list
 * @head: pointer to the head of the list 
 * @line_number: line number
 * Return: nothing
 */
void pint(stack_t **head, unsigned int line_number)
{
    stack_t *current;
    if (!(*head))
    {
        fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
        fclose(global.demo);
        exit(EXIT_FAILURE);
    }
    current = *head;
    printf("%d\n", current->n);
}
