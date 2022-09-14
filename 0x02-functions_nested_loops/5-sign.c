#include "main.h"

/**
 * print_sign - entry point
 * @n: the number
 * Description: checks whether a number is + or -
 *
 * Return: 0 if n is zero else returns -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}