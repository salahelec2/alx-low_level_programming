#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - the entry and the only function
 *
 * Description: 'print from a to zin upper and lower case'
 *
 * Return: Always 0
 */
int main(void)
{
	char alphabetL[] = "abcdefghijklmnopqrstuvwxyz";
	char alphabetU[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i <= 25 ; ++i)
		putchar(alphabetL[i]);
	for (i = 0; i <= 25 ; ++i)
		putchar(alphabetU[i]);
	putchar('\n');
	return (0);
}
