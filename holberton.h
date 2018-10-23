#ifndef HOLBERTON
#define HOLBERTON
#include <stdlib.h>
#include <stdarg.h>
#define null (void *)0
int _printf(const char *format, ...);
char *make_buffer(va_list, const char *format, unsigned int *f_it);
unsigned int find_buffer_size(char *buffer);
unsigned int c_spec(va_list, char *buffer, unsigned int *buff_it);
unsigned int s_spec(va_list, char *buffer, unsigned int *buff_it);
unsigned int i_spec(va_list, char *buffer, unsigned int *buff_it);
unsigned int d_spec(va_list, char *buffer, unsigned int *buff_it);
void rev_string(char *s);
void itoa(int n, char *s);
/**
 * struct spec_finder - Stores format specifier and respective func
 * @spec: Format sepcifier
 * @f: Function that handles specifier
 */
typedef struct spec_finder
{
	char *spec;
	unsigned int (*f)(va_list, char *, unsigned int *);
} find_t;
#endif
