#include "dog.h"

/**
 * print_dog - print contents as shown
 * @d: variable of type `struct dog`
 */
void print_dog(struct dog *d)
{
	char *name;
	char *owner;

	if (d->name == NULL)
		name = "(nil)";
	else
		name = d->name;

	if (d->owner == NULL)
		owner = "(nil)";
	else
		owner = d->owner;

	if (d->age <= 0)
		printf("Name: %s\nAge: (nil)\nOwner: %s\n", name, owner);
	else
		printf("Name: %s\nAge: %f\nOwner: %s\n", name, d->age, owner);
}
