#include "main.h"
#include <stdio.h>
/**
 * print_numbers - print numbers fron 0 to 9
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
		else
			continue;
	}
	_putchar('\n');
}
