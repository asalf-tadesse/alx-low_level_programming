#include "main.h"
#include <string.h>
/**
 * _strcpy - function that copies the string
 * @dest: buffer dest
 * @src: string
 * return: value pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
