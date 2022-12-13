#include "main.h"

/**
 * print_last_digit - print last digit
 * @n: the number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (n < 0)
		n = -n;
	_putchar(l + '0');
	return (l);
}
