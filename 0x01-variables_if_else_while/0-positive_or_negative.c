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
	string sign;

	if (n == 0)
		sign = "zero";
	else if (n > 0)
		sign = "positive";
	else
		sign = "negative";
	printf("%f is %s", n, sign);
	return (0);
}
