#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: a pointer to the new dog, or NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy, *owner_copy;
	int name_len, owner_len;

	/* Allocate memory for new dog */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	return (NULL);

	/* Copy name and owner strings */
	name_len = strlen(name);
	name_copy = malloc(sizeof(char) * (name_len + 1));
	if (name_copy == NULL)
	{
	free(new_dog);
	return (NULL);
	}
	strcpy(name_copy, name);

	owner_len = strlen(owner);
	owner_copy = malloc(sizeof(char) * (owner_len + 1));
	if (owner_copy == NULL)
	{
	free(name_copy);
	free(new_dog);
	return (NULL);
	}

	strcpy(owner_copy, owner);


	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);
}
