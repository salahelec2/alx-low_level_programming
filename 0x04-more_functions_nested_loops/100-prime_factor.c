#include <stdio.h>
#include <math.h>

int is_prime(unsigned long int n);
int main(void)
{
       unsigned	long int n = 612852475143, i;

for (i = 2; i <= sqrt(n); i++)
{
	if (n % i == 0 && is_prime(i))
	{
/*		printf("%lu ", i);*/
		while (n % i == 0)
		{
			n /= i;
		}
	}
}
if (n > 1)
	printf("%lu", n);
putchar(10);
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
