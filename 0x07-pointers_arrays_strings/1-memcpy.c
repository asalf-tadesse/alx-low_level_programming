#include "main.h"
#include <stdio.h>
/**
 * @_memcpy functions that fills a memory with a constant byte
 * 
 * @param dest
 * @param src
 * @param n
 * @return char*
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return dest;
}
