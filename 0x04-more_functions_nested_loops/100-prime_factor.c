#include <stdio.h>
/**
 *main - prints the largest prime factor of 612852475143
 *Return: 0
 */
int main(void)
{
	long r, c, n, i = 612852475143;
	int isprime = 1;

	n = i;
	for (c = 2; c < (n / 2); c++)
	{
		if (n % c == 0)
		{
			isprime = 0;
			n = n / c;
			r = c;
		}
	}
	if (isprime == 0)
		printf("%li\n", r);
	else
		printf("%li is a prime number\n", i);
	return (0);
}
