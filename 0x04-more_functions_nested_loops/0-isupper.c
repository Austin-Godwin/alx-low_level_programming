#include "main.h"

/**
 * _isupper - Checks for uppercase character
 * @c: The said character to be checked
 *
 * Return: 1 if the character is uppercase, 0
 * if the character is 1.
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
