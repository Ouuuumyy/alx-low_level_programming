#include "main.h"
#include <stdio.h>
/**
 * more_numbers - print numbers fron 0 to 14
 */
void more_numbers(void)
{
	int i , j;

	for (j = 0; j < 10 ; j++)
	{
		for (i = 0; i < 10; i++)
	{
	_putchar(i + '0');
	}
	for (i = 0; i < 5; i++)
	{
		_putchar('1');
		_putchar(i + '0');
	}
	}
	_putchar('\n');
}
