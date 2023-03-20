#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints numbers from 0 to 10
 * using putchar only
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 48 ; i < 58 ; i++)
	{
		putchar(i);
        }
	putchar('\n');
	return (0);
}
