#include <stdio.h>
/**
 *  main - Entry point
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{

	int d = '0';


	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);

		if (d != '9')
			putchar(',');

		if (d != '9')
			putchar(' ');
	}

	putchar('\n');
	return (0);
}
