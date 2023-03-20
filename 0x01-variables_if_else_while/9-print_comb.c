#include <stdio.h>
/**
 * main - prints all combinations of digit numbers 
 * followed by a , and a space
 * Return: 0(Success)
 */
int main(void)
{
	int i;

	for (i = 48 ; i < 98 ; i++)
	{
		putchar(i);
		if(i != 97)
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
