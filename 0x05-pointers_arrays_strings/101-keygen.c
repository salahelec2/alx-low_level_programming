#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - the only function to generate pass code 
 *
 * Return : void
 */

int main(void)
{
	srand((unsigned int)(time(NULL)));
	int i;
	i = 0;
	char ch[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789/,.-+=~`<>:";
	for(i = 0; i < 12; i++)
	{
		printf("%c", ch[rand() % (sizeof ch - 1)]);
	}
	return (0);
}
