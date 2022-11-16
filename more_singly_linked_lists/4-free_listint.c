#include "lists.h"
/**
 * free_listint - check the code
 *@head: list entry point
 * Return: Always 0.
 */
void free_listint(listint_t *head)
{
	listint_t *victime;

	while (head != NULL)
	{
		victime = head;
		head = head->next;
		free(victime);
	}
}

