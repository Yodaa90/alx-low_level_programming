#include "main.h"

/**
 * print_line - straight line in terminal
 *
 *@n: holds a number of lines
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}


		_putchar('\n');

	}



}
