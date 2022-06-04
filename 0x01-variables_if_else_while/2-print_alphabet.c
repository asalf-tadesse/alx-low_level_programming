#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main (void)
{
	char c = 'a';

	while(c <= 'z')
	{
		putchat(c);
		c++;
	}
	putchat('\n');
	return (0);
}
