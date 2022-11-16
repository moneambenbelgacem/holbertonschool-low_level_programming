#include "lists.h"
/**
 * pop_listint - check the code
 *@head: list entry point
 * Return: Always 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *victime;
	int x;

	victime = *head;
	x = victime->n;
	*head = (*(head))->next;
	free(victime);

	return (x);
}
