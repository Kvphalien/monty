#include <monty.h>

/**
 * f_pall - Print the stack
 * @counter : no used
 * @head : pointer to the first node
 * Return : no return
 *
 * Author : Josiah Levi
 */

void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}

