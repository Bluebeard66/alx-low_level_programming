#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet 10 times in lowercase.
 */
void print_alphabet_x10(void)
{
	int i, k;
	for (i = 0; i <= 9; i++)
		for (k = 0; k <= 25;k++)
			_putchar('a' + k);
	_putchar('\n');
}
