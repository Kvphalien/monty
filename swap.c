#include <monty.h>

/**
 * swap - swaps the top two elements in a stack
 * @stack : double pointer to the stack
 * @line_number : Line number of the opcode
 *
 * Author : Josiah Levi
 */

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = (*stack)->next;
	(*stack)->next = temp->next;
	(*stack)->prev = temp;
	temp->next = *stack;
	temp->prev = NULL;
	*stack = temp;
}
