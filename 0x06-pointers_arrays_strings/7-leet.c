#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: the string to encode
 *
 * Return: The encoded stirng
 */
char *leet(char *s)
{
	int a = 0, b = 0, c = 5;
	char j[5] = {'A', 'E', 'O', 'T', 'L'};
	char n[5] = {'4', '3', '0', '7', '1'};

	while (s[a])
	{
		b = 0;

		while (b < c)
		{
			if (s[a] == j[b] || s[a] - 32 == j[b])
			{
				s[a] = n[b];
			}
			b++;
		}
		a++;
	}
	return (s);
}
