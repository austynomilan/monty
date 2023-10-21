#include "monty.h"
/**
 * custom_pall - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/
void custom_pall(stack_t **head, unsigned int counter)
{
	stack_t *hd;
	(void)counter;

	hd = *head;
	if (hd == NULL)
		return;

	while (hd)
	{
		printf("%d\n", hd->n);
		hd = hd->next;
	}
}
