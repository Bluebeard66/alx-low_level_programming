#include <stdio.h>
/**
 * main - Prints the sum of even-valued Fibonacci sequence less than 4000000
 * Return: 0
*/

int main(void)
{
	unsigned long fibo1 = 0, fibo2 = 1, sum;
	float result;

	while (1)
	{
		sum = fibo1 + fibo2;
		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			result += sum;
		fibo1 = fibo2;
		fibo2 = sum;
	}
	printf("%.0f\n", result);
	return (0);
}
