#include "monty.h"

/**
 * print_string_from_stack - Prints the string starting at the top of the stack,
 * followed by a new line.
 * @head: Pointer to the stack head.
 * @counter: Line number.
 * Return: No return value.
 */
void print_string_from_stack(stack_t **head, unsigned int counter)
{
	stack_t *top;
	(void)counter;

	top = *head;
	while (top)
	{
		if (top->n > 127 || top->n <= 0)
		{
			break;
		}
		printf("%c", top->n);
		top = top->next;
	}
	printf("\n");
}
