#ifndef DOG_H
#define DOG_H

/**
 * struct dog - new type dog struct
 * @name: 1st element
 * @age: 2nd element
 * @owner: 3rd element
 * Description: This is a new struct
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



#endif
