#include "main.h"
/**
 * main - prints the fizz-buzz test
 * Return: 0
 */
int main(void)
{
	int c, r3, r5;

	for (c = 1; c <= 100; c++)
	{
		r3 = c % 3;
		r5 = c % 5;
	if ((r3 != 0) && (r5 != 0))
		printf("%d", c);
	else
	{
	if (r3 == 0)
		printf("Fizz");
	if (r5 == 0)
		printf("Buzz");
	}
	printf(' ');
	}
	return (0);
}
