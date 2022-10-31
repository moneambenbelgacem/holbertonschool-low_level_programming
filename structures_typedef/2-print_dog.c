#include "dog.h"
/**
 * print_dog - Entry point
 *
 * @d: struct dog
 *
 * Description: 'set values.'
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		d->name ? printf("%s", d->name) : printf("nil\n");
		d->age ? printf("%d", d->age) : printf("nil\n");
		d->owner ? printf("%s", d->owner) : printf("nil\n");
	}
}
