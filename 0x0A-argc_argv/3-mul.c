#include <stdio.h>
#include "main.h"

/**
 * main - multiplies two integers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int mul = 0;
	int a = 0;
	int b = 0;

	if (argc != 3)
	{
		printf("Error");
		return (1);
	}
	else
	{
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mul = a * b;
	printf("%d\n", mul);

	return (0);
	}
}
