#include "monty.h"
/**
 * f_swap - adds the top tow elemnets of stack
 * @head: stack head
 * @count: nbr line
*/
void f_swap(stack_t **head, unsigned int count)
{
	stack_t *h;
	int len = 0, x;

	h = *head;

	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	x = h->n;
	h->n = h->next->n;
	h->next->n = x;
}
