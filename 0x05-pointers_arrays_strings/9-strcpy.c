#include "main.h"
/**
 * _strcpy function that copies the string pointed to by src, including
 *  the terminating null byte ('\0'),to the buffer pointed to by dest
 * 
 * @return the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
