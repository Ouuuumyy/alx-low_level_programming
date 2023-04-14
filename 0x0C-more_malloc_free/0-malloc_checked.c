#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: size
 * Description: allocates memory for b integers
 * Return:  a pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *m;

	m = malloc(b);
	if (m == NULL)
	{
		exit(98);
	}

	return (m);
}
