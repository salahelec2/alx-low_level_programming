#include <stdio.h>

/**
 * main - the only function in this code
 * Description: Print 50 first fibonacci numbers.
 * Return: 0
 */
int main(void)
{
	int n, a, b, c;
	
	n = c = 0;
	b = 2;
	a = 1;
	while (n <= 50)
	{
		c = b + a;
		printf("%d\n", a );
		a = b;
		b = c;
		n++;
	}
	return (0);
}
