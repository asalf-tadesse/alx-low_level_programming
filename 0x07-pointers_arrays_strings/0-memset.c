#include "main.h"
#include <stdio.h>

/**
 * @*_memset function memory with a constant byte
 *
 * @param s
 * @param b
 * @param n
 * @return char*
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return s;
}
