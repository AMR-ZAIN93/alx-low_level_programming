#include "main.h"
/**
 * print_numbers - Print 0 - 9.
 *
 * Return: void.
 *
 *
 */

void print_numbers(void)
{
	int c;

	do {
		_putchar(c + 48);
		c++;
	} while (c >= 0 && c <= 9);
	_putchar('\n');
}
