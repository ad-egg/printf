#ifndef HOLBERTON
#define HOLBERTON
#include <stdlib.h>
#include <stdarg.h>
int _printf(const char *format, ...);
unsigned int find_buffer_size(const char *str);
void c_spec(va_list);
void s_spec(va_list);
void i_spec(va_list);
void d_spec(va_list);
typedef struct spec_finder
{
	char *c;
	void (*f)(va_list);
} find_t;
#endif
