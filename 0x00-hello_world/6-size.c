#include<stdio.h>
/**
 * main - the entry and the only function
 *
 * Description: 'This code print size of different data type in c'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        printf("Size of a char: %d byte(s)\n",sizeof(char));
        printf("Size of an int: %d byte(s)\n",sizeof(int));
        printf("Size of a long int: %d byte(s)\n",sizeof(long));
        printf("Size of a long long int: %zu byte(s)\n",sizeof(unsigned long));
        printf("Size of a float: %d byte(s)\n",sizeof(int));
        return (0); /* Return 0 by main function */
}
