#include <stdio.h>
#include <math.h>

int is_prime(long long int n);
int main(void)
{
long long int n = 612852475143;

for (long long int i = 2; i <= sqrt(n); i++)
{
	if (n % i == 0 && is_prime(i))
	{
		printf("%lld ", i);
		while (n % i == 0)
		{
			n /= i;
		}
	}
}
if (n > 1)
	printf("%lld", n);
printf("\n");
return (0);
}

int is_prime(long long int n)
{
	if (n <= 1)
		return (0);
	for (long long int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
