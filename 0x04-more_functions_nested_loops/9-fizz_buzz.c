#include <stdio.h>

/**
 * main - Prints 1 to 100, and if there's a multiples of three,
 * it prints fizz, multiples of 5, it prints Buzz, then
 * multiples of both 5 and 3, prints FIzzBuzz.
 *
 * Return: Always 0.
*/
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((num % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((num % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", num);
		}
		if (num == 100)
		{
			continue;
		}
		printf(" ");
	}
	printf("\n");

	return (0);
}
