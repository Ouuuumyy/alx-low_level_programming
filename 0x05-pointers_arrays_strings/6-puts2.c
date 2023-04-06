#include "main.h"
/**
 * puts2 - afunction that prints charaters of a string
 * starting from the first one bunt only one of two
 * @str: input
 */
void puts2(char *str)
{
	int longs = 0;
	int i;

	while (*str != '\0')
	{
		longs++;
		str++;
	}
	longs--;
	for (i = 0; i <= longs; i++)
	{
		if (i %  2 == 0)
			printf("%c", (*str + i));
	}
	printf("\n");
}
