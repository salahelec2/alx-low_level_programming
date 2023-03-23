#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print Fizz if the number is multiple of 5 Buzz if 3
 *
 * Return: void
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
			printf("FizzBuzz");
		else if (n % 5 == 0)
			printf("Buzz");
		else if (n % 3 == 0)
			printf("Fizz");
		else
			printf("%i", n);

		if (n < 100)
			printf(32);
		else
			printf(10);
	}
	return (0);
}
