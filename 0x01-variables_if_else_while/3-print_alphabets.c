#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, followed by a new line.
 * Return: 0 (success)
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	for (a = 'A'; a <= 'Z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}