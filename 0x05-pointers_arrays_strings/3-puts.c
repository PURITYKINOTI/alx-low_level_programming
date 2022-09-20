#include "main.h"

/**
 * _puts  - prints a string, followed by a new line, to stdout
 * @str: the string
 *
 * Return: no return
 */
void _puts(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			brea;
		}
		_putchar(str[count]);
		coint++;
	}
}
