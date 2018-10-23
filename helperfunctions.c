#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * c_spec - Will add a character to the buffer printed
 * @form_args: Format arguments
 * @buffer: Buffer printed to stdout
 * @buff_it: Pointer to buffer iterator
 * Return: Buffer growth
 */
unsigned int c_spec(va_list form_args, char *buffer, unsigned int *buff_it)
{
	unsigned int i = *buff_it;

	buffer[i] = (char)va_arg(form_args, int);
	return (*buff_it + 1);
}
/**
 * s_spec - Will add a string to the buffer printed
 * @form_args: Format arguments
 * @buffer: Buffer printed to stdout
 * @buff_it: Pointer to buffer iterator
 * Return: Buffer growth
 */
unsigned int s_spec(va_list form_args, char *buffer, unsigned int *buff_it)
{
	unsigned int i = *buff_it, j = 0;
	char *str;

	str = va_arg(form_args, char *);
	while (str[j] != '\0')
	{
		buffer[i] = str[j];
		i++;
		j++;
	}
	return (i);
}
/**
 * d_spec - Will add a readable double value to the buffer printed
 * @form_args: Format arguments
 * @buffer: Buffer printed to stdout
 * @buff_it: Pointer to buffer iterator
 * Return: Buffer growth
 */
unsigned int d_spec(va_list form_args, char *buffer, unsigned int *buff_it)
{
	unsigned int i = *buff_it, j = 0;
	char *str;
	double arg = va_arg(form_args, double);

	str = null;
	while (str[j] != '\0')
	{
		buffer[i] = str[j];
		i++;
		j++;
	}
	return (i);
}
/**
 * i_spec - Will add a readble integer value to the buffer
 * @form_args: Format arguments
 * @buffer: Buffer printed to stdout
 * @buff_it: Pointer to buffer iterator
 * Return: Buffer growth
 */
unsigned int i_spec(va_list form_args, char *buffer, unsigned int *buff_it)
{
	unsigned int i = *buff_it, j = 0;
	char *str;
	int arg = va_arg(form_args, int);

	str = null;
	while (str[j] != '\0')
	{
		buffer[i] = str[j];
		i++;
		j++;
	}
	return (i);
}
