#include "main.h"

/**
 * main - check the code
 *
 * print diagonal 
 * 
 * Return: Always 0.
 */
void print_diagonal(int n)
{
int i, j;

	if (n <= 0)
		fputchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (i == j)
			{
				fputchar('\\');
				fputchar('\n');
			}
			else
			{
				fputchar(' ');
			}
		}
	}
    return;
}
