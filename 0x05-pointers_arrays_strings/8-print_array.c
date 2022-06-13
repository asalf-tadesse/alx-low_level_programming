#include "main.h"
/**
 * print_array: that print n elements of array of integers
 * 
 * return nothing
 * 
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}
