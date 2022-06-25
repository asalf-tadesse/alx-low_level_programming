#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 *
 * Return: 0 if no errors, else 1
 */
int main(int argc, char *argv[])
{
	int i, mul;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	else
	{
		mul = 1;
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	return (0);
}
