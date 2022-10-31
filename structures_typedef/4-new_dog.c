#include "dog.h"

/**
 * new_dog - Entry point
 *
 * @name: string
 * @age: float
 * @owner: string
 *
 * Description: 'set values.'
 *
 * Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len_name, len_owner;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	len_name = strlen(name);
	dog->name = malloc(sizeof(char) * (len_name + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = strcpy(dog->name, name);
	dog->age = age;
	len_owner = strlen(owner);
	dog->owner = malloc(sizeof(char) * (len_owner + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->owner = strcpy(dog->owner, owner);

	return (dog);
}
