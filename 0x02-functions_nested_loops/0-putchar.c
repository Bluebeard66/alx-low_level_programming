#include "main.h"
/**
 * main - print _putchar
 * Return: 0 (always)
 *
 */
int main(void)
{
	int i;
	char h[] = "_putchar";

	for (i = 0; i <= 7; i++)
		_putchar(h[i]);
	_putchar('\n');
	return (0);
}
