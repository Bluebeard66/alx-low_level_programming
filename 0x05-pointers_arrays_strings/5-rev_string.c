#include "main.h"
/**
 * rev_string - reverse a string
 * @m: str to be reversed
 */
void rev_string(char *m)
{
	char tmp;
	int i, len, length;

	len = 0;
	length = 0;

	while (m[len] != '\0')
	{
		len++;
	}

	length = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		tmp = m[i];
		m[i] = m[length];
		m[length--] = tmp;
	}
}
