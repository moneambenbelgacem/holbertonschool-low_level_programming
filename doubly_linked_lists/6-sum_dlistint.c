#include "lists.h"
/**
 * sum_dlistint - check the code
 *@head: input list
 * Return: Always EXIT_SUCCESS.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *emchi;
	int sum = 0;

	emchi = head;
	while (emchi != NULL)
	{
		sum += emchi->n;
		emchi = emchi->next;
	}
	return (sum);
}
