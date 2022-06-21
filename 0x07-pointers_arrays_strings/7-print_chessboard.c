#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * @print_chessboard function that print chessboard
 *
 * @param a
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (isalpha(a[i][j]))
			{
				_putchar(a[i][j]);
			}
		}
		_putchar('\n');
	}
}
