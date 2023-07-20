#include "main.h"
/**
 * more_numbers - prints the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int i, c;
		for (c = 0; c <= 9; c++)
		{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar(((i - (i % 10)) / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
		}
}
