#include "monty.h"
/**
 * custom_push - add node to the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void custom_push(stack_t **head, unsigned int counter)
{
	int i, v = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			v++;
		for (; bus.arg[v] != '\0'; v++)
		{
			if (bus.arg[v] > 57 || bus.arg[v] < 48)
				flag = 1;
		}
		if (flag == 1)
		{
			fprint(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprint(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	n = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, i);
	else
		addQ(head, i)
}
