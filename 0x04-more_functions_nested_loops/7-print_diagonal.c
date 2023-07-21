#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: takes integer as input
 */
void print_diagonal(int n)
{
	int c;

	while ((c >= n) && (n >= 0))
	{
	_putchar(' ');
	c++;
	}
	_putchar('\\');
	_putchar('\n');
}
