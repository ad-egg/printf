#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
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

	if (i < 1023)
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
		if (i == 1023)
		{
			write(1, buffer, 1024);
			free(buffer);
			buffer = malloc(1024);
			if (buffer == null)
				free(buffer);
			i = 0;
		}
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
	char *str;
	int arg = va_arg(form_args, int), mflag = 0;
	unsigned int i = *buff_it, j = 0;

	str = int_to_str(arg);
	rev_string(str);
	while (str[j] != '\0')
	{
		if (i == 1023)
		{
			write(1, buffer, 1024);
			free(buffer);
			buffer = malloc(1024);
			if (buffer == null)
				free(buffer);
			i = 0;
		}
		if (arg < 0 && mflag == 0)
		{
			mflag = 1;
			buffer[i] = '-';
		}
		else if (arg >= 0 || mflag == 1)
		{
			buffer[i] = str[j];
			j++;
		}
		i++;
	}
	free(str);
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
	char *str;
	int arg = va_arg(form_args, int);
	unsigned int i = *buff_it, j = 0;

	str = int_to_str(arg);
	rev_string(str);
	while (str[j] != '\0')
	{
		if (i == 1023)
		{
			write(1, buffer, 1024);
			free(buffer);
			buffer = malloc(1024);
			if (buffer == null)
				free(buffer);
			i = 0;
		}
		buffer[i] = str[j];
		i++;
		j++;
	}
	free(str);
	return (i);
}
