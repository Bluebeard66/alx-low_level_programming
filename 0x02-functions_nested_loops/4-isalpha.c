#include "main.h"
/**
 * _isalpha - checks if the character is alphabet
 * Return: 1 if c is alpha
 * else 0
 * @c: takes character as input and cast it as int
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	return (0);
}
