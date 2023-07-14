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
		printf("%f is zero", n);
	else if (n > 0)
		printf("%f is positive", n);
	else
		printf("%f is negative", n);
	return (0);
}
