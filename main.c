#include "monty.h"
global_variable global = {NULL, NULL};
/**
 * main - main function
 * @argc: count arguments
 * @argv: string argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char str[6000], *token;
	void (*k)(stack_t **, unsigned int);
	unsigned int line_number = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	global.demo = fopen(argv[1], "r");
	if (!global.demo)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		fclose(global.demo);
		exit(EXIT_FAILURE);
	}
	while (fgets(str, 256, global.demo))
	{
		line_number++;
		if (str[0] == 10)
			continue;
		token = strtok(str, " \t\n\r");
		if (token == NULL)
			continue;
		k = get_op_func(token);
		if (!k)
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", line_number, token);
			free_list(global.head);
			fclose(global.demo);
			exit(EXIT_FAILURE);
		}
		k(&global.head, line_number);
	}
	free_list(global.head);
	fclose(global.demo);
	return (0);
}
