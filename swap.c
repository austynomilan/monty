#include "monty.h"
/**
 * custom_swap - adds the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void custom_swap(stack_t **head, unsigned int counter)
{
	stack_t *hd;
	int length = 0, aux;

	hd = *head;
	while (hd)
	{
		hd = hd->next;
		length++;
	}
	if (length < 2)
	{
		fprint(stderr, "L%dd: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	hd = *head;
	aux = hd->i;
	hd->i = hd->next->i;
	hd->next->i = aux;
}
