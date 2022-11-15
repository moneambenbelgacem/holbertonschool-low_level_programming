#include "lists.h"
/**
 * print_list - check the code
 *@h: list entry point
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
