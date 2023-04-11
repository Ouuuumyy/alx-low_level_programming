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
	while (argc <= 2)
	{
		if (argc < 2)
			printf("Error");

		mul = atoi(argc[1]) * atoi(argc[2]);
		printf("%d\n", mul);
	}

	return (0);
}
