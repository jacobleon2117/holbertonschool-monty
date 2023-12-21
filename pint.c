#include "monty.h"

/**
 * pint - print top element of stack
 * @stack: the stack
 * @line_number: number of line being read
 **/

void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}
