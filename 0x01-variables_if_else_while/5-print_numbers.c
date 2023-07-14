#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 * Return: 0 (success)
 */
int main(void)
{
	char a;

	for (a = '0'; a <= '10'; a++)
	{
		putchar(a);
	}
	putc('\n');
	return (0);
}
