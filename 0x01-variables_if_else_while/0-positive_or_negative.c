#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/** main - a program that prints if a number is negative
 * or positive or equal to 0
 * Return : 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n<0)
	{
		printf("is negative\n");
	}
	else if(n>0)
	{
		printf("is positive\n");
	}
	else printf("is zero\n");

	return (0);
}

