#include "main.h"
#include <stdio.h>
/**
 * print_times_table - function prints the n times table
 *
 * @n: number to print table
 *
 * Return: table
 */
void print_times_table(int n)
{
	int x, j, res;

	for(x = 0; x <= n; x++)
	{
		if ((n > 15) && (n < 0))
			break;
		for (j = 0; j <= n; j++)
		{
			res = res + x;

			_putchar(res + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
	return;
}
