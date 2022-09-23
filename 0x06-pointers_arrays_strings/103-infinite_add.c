#include "main.h"
#include <stdio.h>

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: the buffer that the function will use to store the result
 * @size_r: buffer size
 *
 * Return: the pointer to dest
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int c = 0, b = 0, p, g, d, h, add = 0;

	while (*(n1 + c) != '\0')
		c++;
	while (*(n2 + b) != '\0')
		b++;
	if (c >= b)
		g = c;
	else
		g = b;
	if (size_r <= g + 1)
		return (0);
	r[g + 1] = '\0';
	c--, b--, size_r--;
	d = *(n1 + c) - 48, h = *(n2 + b) - 48;
	while (bg >= 0)
	{
		p = d + h + add;
		if (p >= 10)
			add = p / 10;
		else
			add = 0;
		if (op > 0)
			*(r + bg) = '0';
		if (c > 0)
			c--, d = *(n1 + c) - 48;
		else
			d = 0;
		if (b > 0)
			b--, h = *(n2 + b) - 48;
		g--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
