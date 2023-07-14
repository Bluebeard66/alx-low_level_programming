#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Generate a random number and determine its sign
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n == 0)
		printf("%i is zero\n", n);
	else if (n > 0)
		printf("%i is positive\n", n);
	else
		printf("%i is negative\n", n);
	return (0);
}
