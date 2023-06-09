#include <stdio.h>

/**
 * main - the only function in this code
 * Description: Print 50 first fibonacci numbers.
 * Return: 0
 */
int main(void)
{
	long int n, a, b, c;

	n = c = 0;
	b = 2;
	a = 1;
	while (n < 50)
	{
		c = b + a;
		if (a == 1)
			printf("%ld", a);
		else
			printf(", %ld", a);
		a = b;
		b = c;
		n++;
	}
	putchar(10);
	return (0);
}
