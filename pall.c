#include "monty.h"
/**
 * @brief 
 * 
 */
void _pall(stack_t **head, unsigned int line_number)
{
    stack_t *current = NULL;
    (void)(line_number);
    
    if (!head)
        exit (EXIT_FAILURE);
    current = *head;
    while (current != NULL)
    {
        printf("%d\n", current->n);
        current = current->next;
    }
}

