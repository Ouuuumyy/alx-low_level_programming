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

	for (i = 0; i < m; i++)
	{
	printf("%c",( *str + i));
	}
	printf("\n");
}
