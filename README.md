# printf 
## man_3_printf
This is the manual page for our `_printf` function.
## holberton.h
This header file contains the prototypes for all the functions used.
## The task
For this project we had to write a function that produced output according to a format.
- Function prototype: `int _printf(const char *format, ...);`
- Return: the number of characters printed (excluding the null byte used to end output to strings).
- Write output to stdout, which is the standard output stream.
- `format` is a character string. The format string is composed of zero or more directives. See `man 3 printf` for more detail.
- The following conversion specifiers are handled:
	- %c
	- %s
	- %d
	- %d
- 
## `*.c`
- All of the `.c` files along with a `main.c` file are to be compiled with `gcc 4.8.4` on Ubuntu 14.04 LTS with the flags `-Wall` `Werror` `-Westra` and `-pedantic`.
- The files will be compiled this way:
```
$ gcc -Wall -Werror -Wextra -pedantic *.c
```
- Each file ends with a new line and contains no more than 5 functions.
- Global variables are not allowed.
- All files use the `Betty` style and were checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl).
- The executable compiled from all of the `.c` files prints to standard output the formatted arguments that were passed to the `_printf` function.
- Authorized functions and macros for this project are:
	- `write (man 2 write)`
	- `malloc (man 3 malloc)`
	- `free (man 3 free)`
	- `va_start (man 3 va_start)`
	- `va_end (man 3 va_end)`
	- `va_copy (man 3 va_copy)`
	- `va_arg (man 3 va_arg)`

