#include<stdio.h>
/**
 * main - print all possible different combinations of two digits.
 * Return: 0 (Success)
*/
int main(void)
{
	int tens = 0, ones;

	for (tens = 0; tens <= 9; tens++)
	{
		for (ones = 0; ones <= 9; ones++)
		{
			if (tens != ones && tens < ones)
			{
				putchar(tens + '0');
				putchar(ones + '0');
				if (!((tens * 10) + ones == 89))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
