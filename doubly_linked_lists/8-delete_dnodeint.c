#include "lists.h"
/**
 * delete_dnodeint_at_index - check the code .
 * @head: Argumetns counter
 * @index: Arguments array
 * Return: Always 0.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *emchi_wrah, *emchi;
	unsigned int i = 1;

	if (head == NULL || *head == NULL)
		return (-1);
	emchi_wrah = *head;
	emchi = (*head)->next;
	if (index == 0)
	{
		if ((*head)->next != NULL)
		{
			(*head) = (*head)->next;
			(*head)->prev = NULL;
			free(emchi_wrah);
			emchi_wrah = NULL;
			return (1);
		}
		else
		{
			free(*head);
			(*head) = NULL;
			return (1);
		}
	}
	else
	{
		while (i < index && (emchi->next != NULL))
		{
			if (i == index - 1)
			{
				emchi_wrah->next = emchi->next;
				emchi->next->prev = emchi_wrah;
				free(emchi);
				emchi = NULL;
				return (1);
			}
			else
			{
				if (!emchi)
					return (-1);
				emchi = emchi->next;
				emchi_wrah = emchi_wrah->next;
				i++;
			}
		}
		emchi_wrah->next = NULL;
		free(emchi);
		emchi = NULL;
		return (1);
	}
}
