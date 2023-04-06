#include "main.h"
/**
 * print_array - a function that prints n elements of an
 * array of integers, followed by a new line.
 * @a: pointer
 * @n: thenumber to print
 */
void print_array(int *a, int n)
{
	int i;
	
	for(i = 0; i < n; i++)
	{
		printf("%d, ", (*a + i));
	}
	putchar('\n');
}
