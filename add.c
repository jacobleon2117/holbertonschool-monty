#include "monty.h"

/**
 * add - adds first two elements of stack
 * @stack: the stack
 * @line_number: number of the line being read
 **/

void add(stack_t **stack, unsigned int line_number)
{
	stack_t *first = *stack;
	stack_t *second = (*stack)->next;

	if (stack == NULL || first == NULL || second == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	second->n = first->n + second->n;
	*stack = second;
	free(first);
}
