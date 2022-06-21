#include "main.h"
#include <stdio.h>

/**
 * @*_strchr function that locat a caracter in a string
 *
 * @param s
 * @param c
 * @return char*
 */
char *_strchr(char *s, char c)
{
	int i, len;

	len = strlen(s);
	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
}
