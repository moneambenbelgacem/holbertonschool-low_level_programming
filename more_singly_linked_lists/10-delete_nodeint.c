#include "lists.h"
/**
 * delete_nodeint_at_index - check the code
 *@head: list entry point
 *@index: list entry point
 * Return: Always 0.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *victime, *previous;
	unsigned int i = 1;
	unsigned int x = 0;
	int state = 0;
	if ((head == NULL || *head == NULL) || index < x)
	{
		return (-1);
	}
	previous = *head;
	victime = (*(head))->next;
	if (index == 0)
	{
		*head = (*(head))->next;
		free(previous);
		state = 1;
		return (1);
	}
	else if (index == 1)
	{
		previous->next = victime->next;
		free(victime);
		state = 1;
		return (1);
	}
	else
	{

		while (victime)
		{
			if (i == index)
			{
				previous->next = victime->next;
				free(victime);
				state = 1;
				break;
			}
			victime = victime->next;
			previous = previous->next;
			i++;
		}
	}
	if (state == 1)
		return (1);
		else
		return (-1);
}
