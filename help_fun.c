#include "monty.h"
/**
 * addnode - add node to the stack
 * @head: head of stack
 * @n: new value
*/
void addnode(stack_t **head, int n)
{
	stack_t *new_node, *x;

	x = *head;
	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (x)
		x->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}

/**
 * free_stack - frees a dbl list
 * @head: head of the stack
*/
void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;

	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}

/**
 * addqueue - add node to ttail stack
 * @n: values
 * @head: head of stack
*/
void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}
