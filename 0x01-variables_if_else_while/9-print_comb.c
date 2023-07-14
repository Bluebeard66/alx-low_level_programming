#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 * Return: 0 (success)
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if (!(a == 0))
		{
			putchar(',');
			putchar(' ');
		}
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}
