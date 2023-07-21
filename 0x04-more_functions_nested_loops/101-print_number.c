#include "main.h"
/**
* print_number - prints an integer.
* @n: takes integer as input to print
*/
void print_number(int num)
{
	unsigned int i = num;

	if (i < 0)
	{
	_putchar('-');
	i = -i;
	}
	if (i > 9)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
