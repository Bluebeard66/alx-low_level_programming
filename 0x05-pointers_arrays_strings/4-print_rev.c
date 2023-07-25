#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @m: string to be printed
 */
void print_rev(char *m)
{
	int i, c, len;

	i = 0;
	while (m[i] != '\0')
		i++;

	len = i;
	for (c = len - 1; c >= 0; c--)
		_putchar(m[c]);

	_putchar('\n');
}
