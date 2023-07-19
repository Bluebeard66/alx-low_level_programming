#include <stdio.h>
/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024
 * Return: 0
 */
int main(void)
{
	int count, sum;

	for (count = 0; count < 1024; count++)
		if (!(count % 3) || !(count % 5))
			sum += count;
	printf("%d\n", sum);
	return (0);
