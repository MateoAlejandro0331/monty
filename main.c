#include "monty.h"
FILE *demo = NULL;
/**
 * @brief 
 * 
 */
int main(int argc, char *argv[])
{
	char str[256], *token;
	stack_t *head = NULL;
	void (*k)(stack_t **, unsigned int);
	unsigned int line_number = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	demo = fopen(argv[1], "r");
	if (!demo)
	{
		fprintf(stderr,"Error: Can't open file %s", argv[1]);
		fclose(demo);
		exit(EXIT_FAILURE);
	}
	while(fgets(str, 256, demo))
	{
		line_number++;
		if (str[0] == 10)
			continue;
		token = strtok(str, " \t\n\r");
		k = get_op_func(token);
		if (!k)
		{
			fprintf(stderr,"L%d: unknown instruction %s\n", line_number, token);
			fclose(demo);
			exit(EXIT_FAILURE);
		}
		k(&head, line_number);
	}
	fclose(demo);
	return 0;
}   