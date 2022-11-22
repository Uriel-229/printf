#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

/**
 * struct structprint - structure containing specifier
 * and corresponding print functions.
 * @specifier: the location and method to translate data to characters.
 * @fn: print function for specific type.
 */

typedef struct structprint
{
	char *q;
	int (*u)(char *format, va_list);
} structype;

int _putchar(char c);
int _printf(const char *format, ...);
int (*fmanager(char *format))(char *format, va_list);
int _buffer(char ch);
int _puts(char *string);
int printc(char *format, va_list);
int printstr(char *format, va_list);

#endif
