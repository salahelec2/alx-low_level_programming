#include <stdio.h>

/**
 * main - the only function in this code
 * Description: sum of even numbers.
 * Return: 0
 */
int main(void)
{
    long int total, a, b, c;

    total = c = 0;
    b = 2;
    a = 1;
    while (c < 4000000)
        {
            c = b + a;
            a = b;
            b = c;
            if ((a % 2) == 0)
                {
                    if (total + a > 4000000)
                        break;
                    else
                        total += a;
                }
        }
    printf("%ld", total);
    return (0);

}

