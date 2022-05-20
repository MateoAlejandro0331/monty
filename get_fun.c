#include "monty.h"

/**
 * get_op_func - match the funtion
 * @s: string to compare
 * Return: funtion match
 */
void (*get_op_func(char *s))(stack_t **stack, unsigned int line_number)
{
	instruction_t instruc[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", pint},
<<<<<<< HEAD
		{"pop", pop},
=======
		{"swap", swap},
>>>>>>> 7c5ffc9788104629d2c34ccf4d830f77f63f76b2
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
