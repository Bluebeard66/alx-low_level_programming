#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, followed by a new line.
 * Return: 0 (success)
 */
int main(void)
{
	for (char a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
