#include <monty.h>

/**
 * f_pint - prints the top
 * @head : head of stack
 * @counter : line number
 * return : no
 *
 * Author : Josiah Levi
 */


void f_pint(stack_t **head, unsigned int counter)

{
    if (*head == NULL)
 {
       fprintf(stderr, "L%d: can't pint, stack empty\n", counter);
       exit(EXIT_FAILURE);
 }

	 printf("%d\n", (*head)->n);
}

