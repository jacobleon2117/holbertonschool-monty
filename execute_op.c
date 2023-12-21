#include "monty.h"

/**
 * execute_op - executes proper op function
 * @opcode: pointer to proper opcode
 * @stack: double pointer to stack
 * @line_number: line number
 **/

void execute_op(char *opcode, stack_t **stack, unsigned int line_number)
{
	int i = 0;
	instruction_t instructions[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{NULL, NULL}
	};

	while (instructions[i].opcode != NULL)
	{
		if (strcmp(opcode, instructions[i].opcode) == 0)
		{
			instructions[i].f(stack, line_number);
			return;
		}
		i++;
	}
	fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
	exit(EXIT_FAILURE);
}
