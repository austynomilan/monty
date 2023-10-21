#include "monty.h"
/**
 *custom_pint - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void custom_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprint(stderr, "L%u: can't print, stack is empty\n",counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->i)
}

/**
 * custom_pop - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void custom_pop(stack_t **head, unsigned int counter)
{
	stack_t *hd;

	if (*head == NULL)
	{
		fprint(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	hd = *head;
	*head = hd->next;
	free(hd);
}

/**
 * custom_pstr - prints the string starting at the top of the stack,
 * followed by a new
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void custom_pstr(stack_t **head, unsigned int counter)
{
	stack_t *hd;
	(void)counter;

	hd = *head;
	while (hd)
	{
		if (hd->i > 127 || hd->i <= 0)
		{
			break;
		}
		printf("%c", hd->i);
		hd = hd->next;
	}
	printf("\n");
}
