#include "main.c"
/**
 * puts_half - prints half of a string
 * @str: input
 */
void puts_half(char *str)
{
	int longs = 0;
	int i;

	while (*str != '\0')
	{
		longs++;
		str++;
	}
	longs--;
	for (i = 0; i <= (longs / 2); i++)
	{
		printf("%c", str[i]);
	}
}
