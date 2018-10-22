#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * c_spec - Will add a character to the buffer printed
 * @form_args: Format arguments
 * @buffer: Buffer printed to stdout
 * @buff_it: Pointer to buffer iterator
 */
void c_spec(va_list form_args, char *buffer, unsigned int *buff_it)
{
	unsigned int i = *buff_it;

	buffer[i] = (char)va_arg(form_args, int);
	*buff_it = *buff_it + 1;
}
/**
 * s_spec - Will add a string to the buffer printed
 * @form_args: Format arguments
 * @buffer: Buffer printed to stdout
 * @buff_it: Pointer to buffer iterator
 */
void s_spec(va_list form_args, char *buffer, unsigned int *buff_it)
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
	*buff_it = *buff_it + j;
}
/**
 * d_spec - Will add a readable double value to the buffer printed
 * @form_args: Format arguments
 * @buffer: Buffer printed to stdout
 * @buff_it: Pointer to buffer iterator
 */
void d_spec(va_list form_args, char *buffer, unsigned int *buff_it)
{
}
/**
 * @form_args: Format arguments
 * @buffer: Buffer printed to stdout
 * @buff_it: Pointer to buffer iterator
 */
void i_spec(va_list form_args, char *buffer, unsigned int *buff_it)
{
}
