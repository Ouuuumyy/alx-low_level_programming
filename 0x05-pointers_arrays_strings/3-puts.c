#include "main.h"
/**
 * _puts - prints a string follows by a new line
 * @str: input string
 */
void _puts(char *str)
{
	int  i;
	int m;

	m  = _strlen(str);

	int t[];

	t[m] = *str;
	for (i = 0; i < m; i++)
	{
	printf("%c", t[i]);
	}
	printf("\n");
}
