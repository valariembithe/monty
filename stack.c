#include "monty.h"

/**
 * switch_to_stack - Switches the data structure to stack mode.
 * @head: Pointer to the stack head.
 * @counter: Line number.
 * Return: No return value.
 */
void switch_to_stack(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifo = 0;
}
