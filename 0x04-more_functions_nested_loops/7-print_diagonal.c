#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: takes integer as input
 */
void print_diagonal(int n)
{
	int i, c;

	for (c = 1; c <= n; c++)
	{
	for (i = 1; i < c; i++)
	{
	_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
