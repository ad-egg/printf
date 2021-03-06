#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * rev_string - reverses a string
 * @s: this string will be reversed
 */
void rev_string(char *s)
{
	int i, j = 0, temp;

	while (s[j] != '\0')
		j++;
	for (i = 0, j = j - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}

/**
 * int_to_str - converts integer into characters to be printed
 * @n: integer to be converted
 * Return: pointer to string
 */
char *int_to_str(int n)
{
	int i = 0;
	char *s = null;
	unsigned int mall_size = find_num_buffer_size(n);

	s = malloc(mall_size + 10);
	if (s == null)
		free(s);
	if (n < 0)
		n = n * -1;
	do {
		s[i++] = (char)(n % 10 + '0');
	} while ((n /= 10) > 0);
	if (n < 0)
		s[i++] = '-';
	s[i] = '\0';
	return (s);
}

