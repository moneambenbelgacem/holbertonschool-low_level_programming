#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct dog - dog struct
 *
 * @name: string
 * @age: float
 * @owner: string
 *
 * Description: Dog struct
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif
