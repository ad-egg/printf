#ifndef HOLBERTON
#define HOLBERTON
#include <stdlib.h>
#include <stdarg.h>
int _printf(const char *format, ...);
void c_spec(va_list, char *buffer, unsigned int *buff_it);
void s_spec(va_list, char *buffer, unsigned int *buff_it);
void i_spec(va_list, char *buffer, unsigned int *buff_it);
void d_spec(va_list, char *buffer, unsigned int *buff_it);
/**
 * struct spec_finder - Stores format specifier and respective func
 * @spec: Format sepcifier
 * @f: Function that handles specifier
 */
typedef struct spec_finder
{
	char *spec;
	void (*f)(va_list);
} find_t;
#endif
