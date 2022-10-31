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
		d->name ? printf("%s\n", d->name) : printf("nil\n");
		d->age ? printf("%d\n", d->age) : printf("nil\n");
		d->owner ? printf("%s\n", d->owner) : printf("nil\n");
	}
}
