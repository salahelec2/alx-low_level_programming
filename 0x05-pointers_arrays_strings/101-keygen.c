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
	char ch[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789/,.-+=~`<>:";
	int i = 0;
	srand((unsigned int)(time(NULL)));
	for(i = 0; i < 12; i++)
	{
		printf("%c", ch[rand() % (sizeof ch - 1)]);
	}
	return (0);
}
