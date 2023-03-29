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

	int index = 0;
	char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789/,.-+=~`<>:";
	for(index = 0; index < 12; index++)
	{
		printf("%c", characters[rand() % (sizeof characters - 1)]);
	}
	return (0);
}
