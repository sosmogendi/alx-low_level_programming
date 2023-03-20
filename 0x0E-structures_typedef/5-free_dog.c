#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for dog
 * @d: pointer to the struct
 * Return: 0
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
