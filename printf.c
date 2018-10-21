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
	int buffer_size;

	buffer_size = find_buffer_size(format); 
	write(1, format, buffer_size);
	return (buffer_size);
}
