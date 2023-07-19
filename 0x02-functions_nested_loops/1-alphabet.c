#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	int i;

	for(i = 0; i <= 25; i++)
		_putchar(char(97+i));
	_putchar('\n');
}
