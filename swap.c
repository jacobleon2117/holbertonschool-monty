#include "monty.h"

/**
 * swap - swap top two elements of stack
 * @stack: the stack
 * @line_number: number of the line being read
 **/

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *first = *stack;
	int temp;

	if (first == NULL || first->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = first->n;
	first->n = first->next->n;
	first->next->n = temp;
}
