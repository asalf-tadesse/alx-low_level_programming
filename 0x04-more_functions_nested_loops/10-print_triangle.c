#include "main.h"
/**
* print_triangle - prints a triangle
* @size: takes in a integer for size of triangle
*/
void print_triangle(int size)
{
	int row, column, k;

	if (size <= 0)
		fputchar('\n');

	for (row = 0; row < size; row++)
	{
		for (column = size - row; column > 1; column--)
			fputchar(' ');
		for (k = row + column; k >= 1; k--)
			fputchar('#');
		fputchar('\n');
	}
}
