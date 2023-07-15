#include<stdio.h>
/**
 * main - print all possible different combinations of two two digits.
 * Return: 0 (Success)
*/
int main(void)
{
	int tho = 0, hands, tens, ones;

	for (tho = 0; tho <= 9; tho++)
	{
		for (hands = 0; hands <= 9; hands++)
		{
			for (tens = 0; tens <= 9; tens++)
			{
				for (ones = 0; ones <= 9; ones++)
				{
					if (tho != hands && tho != tens && tho != ones
&& hands != tens && hands != ones && tens != ones
&& tho < hands && hands < tens && tens < ones)
					{
						putchar(tho + '0');
						putchar(hands + '0');
						putchar(' ');
						putchar(tens + '0');
						putchar(ones + '0');
					if (!((tho * 1000) + (hands * 100)
+ (tens * 10) + ones == 789))
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
