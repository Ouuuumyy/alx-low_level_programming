#include < stdio.h>
/**
 * main - a program that prints the alphabet using putchar
 * Return: Always 0
 */
int main(void)
{
        char alphabet[52]= "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i=o;

	while(i < 52 &&  alphabet[i] != 'q' && alphabet[i] != 'e')
		{
                putchar( alphabet[i]);
		i++;
		}
        putchar('\n');
        return (0);
}
