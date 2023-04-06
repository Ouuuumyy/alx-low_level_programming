#include "main.c"
/**
 * puts_half - prints half of a string
 * @str: input
 */
void puts_half(char *str)
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
	l = (longs - 1) / 2;
	for (i = l; i < longs ; i++)
	{
		printf("%c", str[i]);
	}
}
