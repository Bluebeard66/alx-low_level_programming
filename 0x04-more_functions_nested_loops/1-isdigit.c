#include "main.h"
/**
 * _isdigit - checks if the input is a digit
 * @c: takes a character as input
 * Return: 1 if 'c' is a digit
 * else 0
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}
