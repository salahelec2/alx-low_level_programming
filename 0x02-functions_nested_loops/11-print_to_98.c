#include "main.h"

/**
* print_to_98 - print until reach 98.
*
* Return: void 
*/
void print_to_98(int n)
{
	int reach;

	reach = 0;
	if (n == 98)
		printf("98\n");
	else if (n != 98)
	{
		reach = n;
		do
		{
			if (n < 98)
			{
				printf("%d, ", reach);
				reach++;
			}
			else if (n > 98)
			{
				printf("%d, ", reach);
				reach--;
			}
			if (reach == 98)
				printf("%d\n", reach);
		} while(reach != 98);
	}

}
