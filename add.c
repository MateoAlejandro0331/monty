#include "monty.h"
/**
 * @brief 
 * 
 */
void add(stack_t **head, unsigned int line_number)
{
    stack_t *current = NULL, *aux;
    int sum = 0;

    if ((*head)->next == NULL)
    {
        fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
        free_list(global.head);
        fclose(global.demo);
        exit(EXIT_FAILURE);
    }
    aux = *head;
    current = *head;
    sum += current->n;
    current = current->next;
    sum += current->n;
    current->n = sum;
    free(aux);
    (*head) = current;
}