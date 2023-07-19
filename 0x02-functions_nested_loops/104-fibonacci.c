#include <stdio.h>
/**
 * main - Write a program that finds and prints the first 98 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long fib1 = 0, fib2 = 1, sum, mid1, mid2;
	unsigned long fib1_a, fib1_b, fib2_a, fib2_b;

	for (i = 0; i < 91; i++)
	{
		sum = fib1 + fib2;
		printf("%lu, ", sum);
		fib1 = fib2;
		fib2 = sum;
	}

	fib1_a = fib1 / 10000000000;
	fib2_a = fib2 / 10000000000;
	fib1_b = fib1 % 10000000000;
	fib2_b = fib2 % 10000000000;

	while (i <= 'a')
	{
		mid1 = fib1_a + fib2_a;
		mid2 = fib1_b + fib2_b;
		if (mid2 > 10000000000)
		{
			mid1 += 1;
			mid2 %= 10000000000;
		}

		printf("%lu%lu", mid1, mid2);
		if (i != 97)
			printf(", ");
		fib1_a = fib2_a;
		fib1_b = fib2_b;
		fib2_a = mid1;
		fib2_b = mid2;
		i++;
	}
	putchar('\n');
	return (0);
}
