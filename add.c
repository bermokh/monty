#include "monty.h"
/**
 * f_add - adds the top 2 elmnt of stack
 * @head: stack head
 * @count: nbr line
*/
void f_add(stack_t **head, unsigned int count)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	x = h->n + h->next->n;
	h->next->n = x;
	*head = h->next;
	free(h);
}
