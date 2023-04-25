#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory
 * @d: input
 */
void free_dog(dot_t *dog)
{
	free(dog->name);
	free(dog->owner);
	free(dog);
}
