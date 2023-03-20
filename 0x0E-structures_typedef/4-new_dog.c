#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of new dog
 * @age: the dog's age
 * @owner: dog's owner
 * Description: this function creates new dog and
 * all its elements
 * Return: pointer to buffer of datatype new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *myDog = malloc(sizeof(dog_t));

	if (myDog == NULL)
		return (NULL);

	/* copying name  */
	myDog->name = malloc(strlen(name) + 1);
	if (myDog->name == NULL)
	{
		free(myDog);
		return (NULL);
	}
	strcpy(myDog->name, name);

	/* copying owner  */
	myDog->owner = malloc(strlen(owner) + 1);
	if (myDog->owner == NULL)
	{
		free(myDog);
		return (NULL);
	}
	strcpy(myDog->owner, owner);

	myDog->age = age;

	return (myDog);
}
