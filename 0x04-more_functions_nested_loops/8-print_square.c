#include "main.h"

/**
 * print_square - Prints a squareusing the character #.
 * @size: The size of the square.
 *
 * Return: void is returned
*/
void print_square(int size)
{
	int hi, wi;

	if (size > 0)
	{
		for (hi = 0; hi < size; hi++)
		{
			for (wi = 0; wi < size; wi++)
			{
				_putchar('#');
			}

			if (hi == size - 1)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
