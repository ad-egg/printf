#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * rev_string - reverses a string
 * @s: this string will be reversed
 */
void rev_string(char *s)
{
	int a;
	int b;
	int c;
	int len;

	a = 0;
	len = 0;

	while (s[len] != '\0')
		len++;

	b = len - 1;

	while (a < b)
	{
		c = s[a];
		s[a] = s[b];
		s[b] = c;
		a++;
		b--;
	}
}

/**
 * itoa - converts integer into characters to be printed
 * @n: integer to be converted
 * @s: character string that integer will be converted into
 */
void itoa(int n, char *s)
{
	int i, o, n2;

	i = 0;

	if (n < 0)
		n2 = (n * (-1));
	else
		n2 = n;
	while ((n2 /= 10) > 0)
		s[i++] = ((n2 % 10) + '0');
	if (n < 0)
		s[i++] = '-';
	s[i] = '\0';

	rev_string(s);
}

