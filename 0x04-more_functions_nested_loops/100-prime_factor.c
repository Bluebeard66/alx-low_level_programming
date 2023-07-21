#include <stdio.h>
/**
 * main - prints the largest prime factor of the number 612852475143
 * Return: 0
 */
int main(void)
{
	long c, n, i = 612852475143;
	int isprime = 1;

	n = i;
	for (c = 2; c <= n / 2; c++)
		if (n % c == 0)
		{
			isprime = 0;
			n = n / c;
		}
	if (isprime != 1)
		printf("%d", c);
	else
		printf("%d is a prime number\n", i);
	return (0);
}
