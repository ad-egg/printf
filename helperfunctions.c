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
 void c_spec(va_list form_args, char *buffer, int *buff_it)
{
	unsigned int i = *buff_it;

	i++;
	buffer[i] = (char)va_arg(form_args, int);
	*buff_it = *buff_it + 1;
}
/**
 * s_spec - Will add a string to the buffer printed
 * @form_args: Format arguments
 * @buffer: Buffer printed to stdout
 * @buff_it: Pointer to buffer iterator
 */
void s_spec(va_list form_args, char *buffer, int *buff_it)
{
}
/**
 * d_spec - Will add a readable double value to the buffer printed
 * @form_args: Format arguments
 * @buffer: Buffer printed to stdout
 * @buff_it: Pointer to buffer iterator
 */
void d_spec(va_list form_args, char *buffer, int *buff_it)
{
}
