#include <stdio.h>
/**
 * main - prints the fizz buzz test
 * Return: 0
 */
int main(void)
{
	int i, r3, r5;

	for (i = 1; i <= 100; i++)
	{
	r3 = i % 3;
	r5 = i % 5;
	if ((r3 != 0) && (r5 != 0))
	{
	printf("%d", i);
	}
	else
		{
		if (r3 == 0)
			printf("Fizz");
		if (r5 == 0)
			printf("Buzz");
		}
		if (i != 100)
			printf(" ");
		}
	printf("\n");
	return (0);
}
