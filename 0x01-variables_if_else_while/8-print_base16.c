#include <stdio.h>
/**
 * main - prints all single digit numbers of base 16 starting from 0,
 * followed by a new line.
 * Return: 0 (success)
 */
int main(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
