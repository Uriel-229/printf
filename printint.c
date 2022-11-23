#include "main.h"

/**
 * printint - print a number
 * @format: format to print number
 * @pa: va_list with number to print
 * Return: number of characters printed
 */
int printint(char *format, va_list pa)
{
	int number = va_arg(pa, int);
	int n;
	(void)format;

	n = integer(number);
	return (n);
}
