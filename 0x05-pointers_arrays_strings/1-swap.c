#include "main.h"
/**
 * swap_int -  is a function that swaps the values of two
 * integers
 * @a: parameter 1
 * @b:  parameter 2
 */
void swap_int(int *a, int *b)
{
	int *c;

	*c = *a;
	*a = *b;
	*b = *c;
}
