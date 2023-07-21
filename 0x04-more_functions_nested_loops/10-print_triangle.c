#include "main.h"
/**
 * print_square -  prints a triangle, followed by a new line.
 * @size: takes integer as input
 */
void print_triangle(int size)
{
	int i, c, n;

	if (size <= 0)
		_putchar('\n');
	else
	for (i = 1; i <= size; i++)
		{
		for (n = i; n <= size; n++)
			_putchar(' ');
		for (c = 1; c <= i; c++)
			_putchar('#');
		_putchar('\n');
		}
}
