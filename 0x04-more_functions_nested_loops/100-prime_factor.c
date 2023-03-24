#include <stdio.h>
#include <math.h>

/**
 * main - the esential function
 * Description : this c code if for prime factor calculation
 *
 * is_prime - function to test the prime factor
 * Description : find the prime factor
 *
 * Return : void
 *
 */


int is_prime(unsigned long int n);
int main(void)
{
	unsigned long int n = 612852475143, i;

for (i = 2; i <= sqrt(n); i++)
{
	if (n % i == 0 && is_prime(i))
	{
		while (n % i == 0)
		{
			n /= i;
		}
	}
}
if (n > 1)
	printf("%lu", n);
putchar(10);
return (0);
}

int is_prime(unsigned long int n)
{
	unsigned long int i;

	if (n <= 1)
		return (0);
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
