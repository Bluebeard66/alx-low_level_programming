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
	if (a == 'q'|| a == 'e')
	continue;
		putchar(a);
	}
	putchar('\n');
	return (0);
}
