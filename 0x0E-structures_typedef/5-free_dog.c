#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: variable of data type `struct dog`
 */
void free_dog(dog_t *d)
{
	free(d);
}
