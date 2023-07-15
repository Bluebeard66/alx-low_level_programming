#include<stdio.h>
/**
 * main - print all possible different combinations of three digits.
 * Return: 0 (Success)
*/
int main(void)
{
	int hands = 0, tens, ones;

	for (hands = 0; hands <= 9; hands++)
	{
		for (tens = 0; tens <= 9; tens++)
		{
			for (ones = 0; ones <= 9; ones++)
			{
				if (hands != tens && hands != ones && tens != ones
&& hands < tens && tens < ones)
				{
					putchar(hands + '0');
					putchar(tens + '0');
					putchar(ones + '0');
					if (!((hands * 100) + (tens * 10) + ones == 789))
				{
					putchar(',');
					putchar(' ');
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
