#include "main.h" 
/*
 * main - Print the word _putchar
 *
 * return: 0 Sucess
 *
 */
int main(void)
{
	char put[8] = "_putchar";
	int i;
	
	for(i=0; i<=7; i++)
	{
		putchar(put[i]);
	}
	putchar('\n');
	return (0);
}
