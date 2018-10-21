#include "holberton.h"
/**
 * _strlen - Finds length of string
 * @str: String arg
 * Return: Len of str
 */
unsigned int find_buffer_size(const char *str)
{
	unsigned int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
