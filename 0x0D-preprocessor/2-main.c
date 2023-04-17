#include "main.h"

/**
 * main - print the c file name origine of this code
 *
 * Return: 0
 */

int main() {
	char* file = __FILE__;
	char* p = file;
	while(*p) {
		_putchar(*p);
		p++;
	}
	_putchar('\n');
	return (0);
}

