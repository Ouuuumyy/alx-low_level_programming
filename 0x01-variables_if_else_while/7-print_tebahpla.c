#include <stdio.h>
/**
 * main - prints alphabets in reverse
 * Return: Always 0
 */
int main(void)
{
	int i;
	char alp[26]="abcdefghijklmnopqrstuvwxyz";

	for(i = 26 ; i > 0 ; i--)
	{
		putchar("%d", alp[i]);
	}
	putchar("\n");
	return (0);
}
