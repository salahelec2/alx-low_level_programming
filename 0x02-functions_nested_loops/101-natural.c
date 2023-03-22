#include <stdio.h>

/**
 * main - the only function in this code
 * Description: Print the sum of all multiples of 3 or 5 below 1024.
 * Return: 0
 */
int main(void)
{
	int n = 1;
	int total = 0;

	for (n = 1023; n > 0; n--)
	{
	if ((n % 3) == 0)
		total += n;
	else if ((n % 5) == 0)
		total += n;
	}
	printf("%d\n", total);
	return (0);
}
