#include "lists.h"
/**
 * free_listint2 - check the code
 *@head: list entry point
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
	listint_t *victime;

	if (head == NULL || *head == NULL)
		return;

	while (*head != NULL)
	{
		victime = *head;
		*head = (*(head))->next;
		free(victime);
	}
	*head = NULL;
}
