#ifndef MAIN_H
#define MAIN_H

#include 
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>


int _putchar(char c);
int _printf(const char *format, ...);
int (*fmanager(char *format))(char *format, va_list);

#endif
