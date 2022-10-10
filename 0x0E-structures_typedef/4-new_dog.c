#include "dog.h"
#include <stdlib.h>

/**
 * *_strcpy - copy string
 * @dest: copied string destination
 * @src: string to be copied
 *
 * Return: Copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] != '\0';
	return (dest);
}

/**
 * new_dog - creates a new structure dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: pointer to the structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	(*ptr).name = malloc(sizeof(name) + 1);

	if (name == NULL)
	{
		free(ptr);
		return (NULL);
	}

	(*ptr).owner = malloc(sizeof(owner) + 1);
	if ((*ptr).owner == NULL)
	{
		free((*ptr).name);
		free(ptr);
		return (NULL);
	}

	_strcpy((*ptr).name, name);
	_strcpy((*ptr).owner, owner);
	(*ptr).age = age;

	return (ptr);
}
