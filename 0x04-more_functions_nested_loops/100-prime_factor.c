#include <stdio.h>
/**
* main- the largest prime factor of the number 612852475143
* Return: 0
*/
int main(void)
{
	long n = 612852475143;
	int c = 0;

	while (c++ < n / 2)
	{
		if (n % c == 0)
		{
			n /= 2;
			continue;
		}
		for (c = 3; c < n / 2; c += 2)
		{
			if (n % c == 0)
			n /= c;

		}
	}
	printf("%ld\n", n);
	return (0);
}
