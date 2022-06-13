#include "main.h"
#include <stdio.h>

/**
 * function: to swap_int two numbers 
 *
 * declar temporary variable 
 * 
 * and stor a on tmp then assign b to a then assign tmp to b
 * 
 * return the swaped valu
 */
void swap_int(int *a, int *b)
{
	int *tmp;
	*tmp = *a;
	*a = *b;
	*b = *tmp;
}
