#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * find_num_buffer_size - Finds size of buffer the str equivalent of int will be stored in
 * @n: Integer
 * Return: Size of buffer to be allocated
 */
unsigned int find_num_buffer_size(int n)
{
	unsigned int i = 1;

	while (n >= 1)
	{
		i++;
		n /= 10;
	}
	return (i);
}
/**
 * find_buffer_size - Finds size of buffer
 * @buffer: Buffer
 * Return: Buffer size
 */
unsigned int find_buffer_size(char *buffer)
{
	unsigned int i = 0;

	while (buffer[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * make_buffer - Loops through format and puts formatted output in buffer
 * @format: Format string
 * @form_args: List of format arguments
 * @f_it: Pointer to format iterator
 * Return: Amount of bytes copied to buffer
 */
char *make_buffer(va_list form_args, const char *format, unsigned int *f_it)
{
	char *buffer = malloc(1024);
	unsigned int spec_it, buff_it = 0, conv_flag = 0;
	find_t conversionspecs[] = {
		{"c", c_spec},
		{"s", s_spec},
		{"d", d_spec},
		{"i", i_spec},
		{null, null}
	};

	while ((format[*f_it] != '\0') && (buff_it < 1023))
	{
		if (format[*f_it] == '%' && conv_flag == 0)
		{
			conv_flag = 1;
		}
		else if (conv_flag == 1 && format[*f_it] != '%')
		{
			spec_it = 0;
			while (conversionspecs[spec_it].spec != null)
			{
				if (format[*f_it] == *(conversionspecs[spec_it].spec))
					buff_it = conversionspecs[spec_it].f(form_args, buffer, &buff_it);
				spec_it++;
			}
			conv_flag = 0;
		}
		else
		{
			buffer[buff_it] = format[*f_it];
			buff_it++;
			conv_flag = 0;
		}
		*f_it += 1;
	}
	buffer[buff_it] = '\0';
	return (buffer);
}
/**
 * _printf - Write formatted output to stdout
 * @format: Formatted string of input
 * Return: Num of chars printed
 */
int _printf(const char *format, ...)
{
	char *buffer;
	va_list form_args;
	unsigned int buffer_size = 0, f_it = 0;


	va_start(form_args, format);
	while (format[f_it] != '\0')
	{
		buffer = make_buffer(form_args, format, &f_it);
		buffer_size = find_buffer_size(buffer);
		write(1, buffer, buffer_size);
		free(buffer);
	}
	va_end(form_args);
	return (buffer_size);
}
