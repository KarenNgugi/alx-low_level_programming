#include "dog.h"

/**
 * new_dog - creates new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 * Return: dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *name_copy, *owner_copy;
	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	name_copy = name;
	owner_copy = owner;

	return (dog);
}
