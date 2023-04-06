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
	int l = 0;
	char *p = str;

	while (*p != '\0')
	{
		longs++;
		p++;
	}
	l = longs-1;
	for (i = 0; i <= l; i++)
	{
		if (i % 2 == 0)
			putchar(str[i]);
	}
	putchar('\n');
}
