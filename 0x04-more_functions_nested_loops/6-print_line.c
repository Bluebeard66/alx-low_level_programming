#include "main.h"
/**
 * print_line - prints the character '_' n times
 * @n: takes integer as input
 */
void print_line(int n)
{
	while (n >= 1)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
