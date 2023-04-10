#include <stdio.h>
#include "main.h"
/**
 * main - function prints the name of the program
 * @argc: the number of arguments
 * @argv: a table contains the arguments
 * Return: 0 Success
 */
int main(int __attribute__((unused)) argc , char *argv[])
{
	printf("%s", *argv++);

	return (0);
}
