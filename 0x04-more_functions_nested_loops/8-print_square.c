#include "main.h"
/**
 * print_square -  prints a square, followed by a new line.
 * @size: takes integer as input
 */
void print_square(int size)
{
	int i, c;

	for (i = 0; i < size; i++)
		{
		for (c = 0; c < size; c++)
			_putchar('#');
		_putchar('\n');
		}
}
