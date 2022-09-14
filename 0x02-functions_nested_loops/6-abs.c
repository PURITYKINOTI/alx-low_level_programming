#include "main.h"

/**
 * _abs - Entry point
 * Description: prints the absolute value
 * @n: int type number
 *
 * Return: absolute value os @n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
