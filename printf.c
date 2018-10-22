#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * _printf - Write formatted output to stdout
 * @format: Formatted string of input
 * Return: Num of chars printed
 */
int _printf(const char *format, ...)
{
	va_list form_args;
	unsigned int form_it = 0, buff_it = 0, spec_it;
	char *buffer = malloc(1024);
	int conv_flag = 0;

	find_t conversionspecs[] = {
		{"c", c_spec},
		{"s", s_spec},
		{"d", d_spec},
		{"i", i_spec},
	};

	va_start(form_args, format);
	while ((format != NULL) && (format[form_it] != '\0'))
	{
		if (format[form_it] == '%')
		{
			conv_flag = 1;
			form_it++;
		}
		else if (conv_flag == 1)
		{
			spec_it = 0;
			while (conversionspecs[spec_it].spec != NULL)
			{
				if (format[form_it] == *(conversionspecs[spec_it].spec))
					conversionspecs[spec_it].f(form_args, buffer, &buff_it);
				spec_it++;
			}
			form_it++;
		}
		else
		{
			buffer[buff_it] = format[form_it];
			buff_it++;
			form_it++;
		}
	}
	va_end(form_args);


	write(1, format, buff_it);

	return (buff_it);
}
