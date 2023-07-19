#include "main.h"
/**
 * _islower - determine if the characher is lowercase
 * Return: 1 if c is lowercase
 *         else 0
 * @c: takes a character as input and cast it as int
*/
int _islower(int c)
{
	if (c >= 97 || c <= 122)
		return (1);
	return (0);
}
