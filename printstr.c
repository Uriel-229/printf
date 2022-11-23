#include "main.h"

/**
 * printstr - print string.
 * @format: format str.
 * @args: va_list with str.
 * Return: number str for print.
 */
int printstr(char *format, va_list args)
{
	char *string = va_arg(args, char *);
	int counter;
	(void)format;

	if (string == NULL)
		string = "(null)";
	counter = _puts(string);
	return (counter);
}
