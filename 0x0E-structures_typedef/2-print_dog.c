#include "dog.h"

/**
 * print_dog - print contents as shown
 * @d: variable of type `struct dog`
 */
void print_dog(struct dog *d)
{
	char *name = d->name;
	float age = d->age;
	char *owner = d->owner;

	if (d == NULL)
		printf("Name: (nil)\nAge: %f\nOwner: %s\n", age, owner);
	printf("Name: %s\nAge: %f\nOwner: %s\n", name, age, owner);
}
