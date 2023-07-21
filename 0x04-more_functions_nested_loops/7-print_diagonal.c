#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: takes integer as input
 */
void print_diagonal(int n)
{
	int i, c;
	if (n > 0)
	for (c = 0; c < n; c++)
		{
		for (i = 0; i < c; i++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
		}
	else
		_putchar('\n');
}
