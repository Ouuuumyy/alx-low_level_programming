#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print numbers from given number to 98
 * @n: entered number
 */
void print_to_98(int n)
{
	int i;

	if (n == 98)
		printf("98\n");
	else if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d, ", i);
		}
		printf("\n");
	}
	else
	{
		for (i =  n; i >= 98 ; i--)
		{
			printf("%d, ", i);
		}
		printf("\n");
	}
}
