#include "main.h"
/**
 * _strlen - Returns the length of a string.
 * @s: char pointer.
 * Return: length of a string.
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != 0)
	{
		len++;
		s++;
	}
	return (len);
}
