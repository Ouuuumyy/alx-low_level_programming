#include "main.h"

/**
 * print_line - a fucntion thant prints a line in the terminal
 */
void print_line(int n)
{
	int i;

	for (i = 1 ; i <= n ; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
