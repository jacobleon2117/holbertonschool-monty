#include "monty.h"

/**
 * pall - prints all elements of the stack
 * @stack: double pointer to stack
 * @line_number: number of line being read
 **/

void pall(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
	stack_t *current;

	current = *stack;
	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
