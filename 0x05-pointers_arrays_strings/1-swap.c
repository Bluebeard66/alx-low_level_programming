#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @x: pointer to variable
 * @y: pointer to variable
 */
void swap_int(int *x, int *y)
{
	int tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}
