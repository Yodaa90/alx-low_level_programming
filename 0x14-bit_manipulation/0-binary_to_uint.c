#include "main.h"

/**
 * binary_to_uint - a function that converts
 * a binary number to an unsigned int.
 * @b: pointer to a string containing a binary number
 *
 * Return: unit
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint;
	unsigned int place;
	int y;

	if (!b)
		return (0);

	for (y = 0; b[y]; y++)
		;
	y--;
	for (place = 1, uint = 0; y >= 0; y--)
	{
		if (b[y] == '0')
		{
			place *= 2;
			continue;
		}
		else if (b[y] == '1')
		{
			uint += place;
			place *= 2;
			continue;
		}
		return (0);
	}
	return (uint);
}
