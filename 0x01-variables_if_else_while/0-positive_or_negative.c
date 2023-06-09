#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - the entry and the only function
 *
 * Description: 'test a random number if it is 0 negative or positive'
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
