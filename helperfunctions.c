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
	*buffer_it++;
}
