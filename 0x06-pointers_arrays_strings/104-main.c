#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
*/
int main(void)
{
	char buffer[] = "A string!\0And #buffer :)\1\6\7#cisfun\x20\x21\x34\x56\n";

	printf("%s\n", buffer);
	printf("---------------------------------\n");
	print_buffer(buffer, sizeof(buffer));
	return (0);
}
