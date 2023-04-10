#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string follows by a new line
 * @str: input string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
	printf("%c", *str++);
	}
	printf("\n");
}
