#include "monty.h"

/**
 * push - pushes new node on top of the stack
 * @stack: double pointer to top of stack
 * @line_number: number of the line read
 **/

void push(stack_t **stack, unsigned int line_number)
{
	int num;
	stack_t *new_node;
	char *token;

	if (stack == NULL)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	token = strtok(0, " \t\n");
	if (token == NULL)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	num = atoi(token);
	if (strspn(token, "0123456789-+") != strlen(token))
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = num;
	new_node->prev = NULL;
	new_node->next = *stack;
	if (*stack != NULL)
		(*stack)->prev = new_node;
	*stack = new_node;
}
