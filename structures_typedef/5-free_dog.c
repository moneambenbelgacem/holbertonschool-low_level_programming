#include "dog.h"
/**
 * free_dog - Entry point
 *
 * @d: struct dog
 *
 * Description: 'set values.'
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
