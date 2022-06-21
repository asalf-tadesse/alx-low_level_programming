#include "main.h"
#include <stdio.h>
/**
 * @brief the function that searchs a string for any of a set of bytes
 *
 * @param s
 * @param accept
 * @return char*
 */
char *_strpbrk(char *s, char *accept)
{
	char *i = s;
	char *j = accept;

	while (*i)
	{
		i = s;
		j = accept;

		while (*j)
		{
			if (*i == *j)
			{
				i++;
				j++;
			}
			else
			{
				break;
			}
		}
		if (*i == '\0')
			return(s);
		s++;
	}
	return (0);
}
