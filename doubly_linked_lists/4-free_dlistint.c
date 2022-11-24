#include "lists.h"
/**
 * free_dlistint - check the code
 *@head: input list
 * Return: Always EXIT_SUCCESS.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *victime = head;

	while (victime)
	{
		dlistint_t *next = victime->next;

		free(victime);
		victime = next;
	}
}
