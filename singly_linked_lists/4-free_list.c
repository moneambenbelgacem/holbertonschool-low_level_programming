#include "lists.h"
/**
 * free_list - check the code
 *@head: list entry point
 * Return: Always 0.
 */
void free_list(list_t *head)
{
	list_t *victime;

	while (head != NULL)
	{
		victime = head;
		head = head->next;
		free(victime->str);
		free(victime);
	}
}

