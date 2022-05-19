#include "monty.h"

/**
 * @brief 
 * 
 */

void (*get_op_func(char *s))(stack_t **stack, unsigned int line_number)
{
    instruction_t instruc[] = {
            {"push", _push},
            {"pall", _pall},
            {NULL, NULL}
            }; 
    int i = 0;

    while (instruc[i].opcode)
    {
        if (strcmp(s, instruc[i].opcode) == 0)
            break;
        i++;
    }
    return (instruc[i].f);
}