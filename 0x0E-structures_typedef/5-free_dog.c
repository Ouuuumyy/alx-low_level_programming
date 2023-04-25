#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory
 * @d: input
 */
void free_dog(dog_t *dog)
{
	if(d)
	{
	free(dog->name);
	free(dog->owner);
	free(dog);
	}
}
