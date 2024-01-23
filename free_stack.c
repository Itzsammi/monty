#include "monty.h"
/**
* free_stack - it free a doubly linked list
* @head: head of the stack
*/

void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head; /*this is head*/
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
