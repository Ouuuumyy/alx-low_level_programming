#include <stdio.h>
#include <stdlib.h>
/**
* main - prints numbers of base 16
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
	for (i = 97 ; i < 103 ; i++)
	{
	putchar(i);
	}
	putchar('\n');
	return (0);
}
