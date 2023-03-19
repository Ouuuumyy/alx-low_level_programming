#include < stdio.h>
/**
 * main - a program that prints the alphabet using putchar
 * Return: Always 0
 */
int main(void)
{
	char alphabet[26]= "abcdefghijklmnopqrstuvwxyz";

	for(int i=0; i < 26; i++)
	{
		putchar( alphabet[i]);
	}
	putchar('\n');
	return (0);
}
