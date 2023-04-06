#include "main.h"
/**
 * print_rev - a function that prints a string in reverse
 * @s: the input
 */
void print_rev(char *s)
{
	int longs = 0;
	int i;

	while (*s != '\0')
	{
		longs++;
		s++;
	}
	s--;
	for (i = longs; i > 0; i--)
	{
		printf("%c", *s);
		s--;
	}
	printf("\n");
}
