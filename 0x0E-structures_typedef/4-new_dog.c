#include "dog.h"
#include <string.h>

/**
 * scpy - copies string from s2 to s1
 * @s1: string to be copied to
 * @s2: string to be copied from
 * Return: copied string
 */
char *scpy(char *s1, char *s2)
{
	char *s = s1;

	while (*s2)
		*s1++ = *s2++;

	*s1 = 0;
	return (s);
}

/**
 * new_dog - create new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dog's owner
 * Return: dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->name = malloc((strlen(name) + 1) * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog->name);
		return (NULL);
	}

	dog->owner = malloc((strlen(owner) + 1) * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->owner);
		return (NULL);
	}

	dog->name = scpy(dog->name, name);
	dog->age = age;
	dog->owner = scpy(dog->owner, owner);

	free(dog->owner);
	free(dog->name);
	free(dog);
	return (dog);
}
