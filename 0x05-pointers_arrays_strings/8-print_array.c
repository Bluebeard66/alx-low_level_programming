#include "main.h"
/**
 * print_array - print k elements of an array
 * @arr: array to be printed
 * @k: number of elements to print
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < k; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", n[i]);
	}
	printf("\n");
}
