#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int num;
	unsigned long fibo1, fibo2, result;

	fibo1 = 0, fibo2 = 1;
	for (num = 0; num < 50; num++)
	{
		result = fibo1 + fibo2;
		printf("%lu", result);
		fibo1 = fibo2;
		fibo2 = result;
		if (num != 49)
			printf(", ");
	}
	putchar('\n');
	return (0);
}
