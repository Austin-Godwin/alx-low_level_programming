#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0 to 9,
 * with 2 and 4 not included. followed by a new line.
 *
 * Return: void is returned since the function type
 * is void.
*/
void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num != 2 && num != 4)
		{
			_putchar((num % 10) + '0');
		}
	}
	_putchar('\n');
}
