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
		d->name ? printf("Name: %s\n", d->name) : printf("nil\n");
		d->age ? printf("Age: %f\n", d->age) : printf("nil\n");
		d->owner ? printf("Owner: %s\n", d->owner) : printf("nil\n");
	}
}
