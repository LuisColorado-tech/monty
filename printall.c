#include "monty.h"
/**
 * pall - print all nodes in stack
 * @h: head of list
 * @line_number: bytecode line number
 */
void pall(stack_t **h, unsigned int line_number)
{
	stack_t *tmp = NULL;

	if (!h || !*h)
		return;
