#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * main - multiplies two integers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (error)
 */

int main(int argc, char *argv[])
{
	int mul = 0;
	int a = 0;
	int b = 0;

	if (argc != 3)
	{
		printf("Error\n");
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
