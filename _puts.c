#include "main.h"

/**
 * _puts - print a string followed by a new line, to stdout.
 * @string: input string
 * Return: character count of string.
 */
int _puts(char *string)
{
	int contador = 0;

	while (*string)
	{
		_putchar(*string);
		string++;
		contador++;
	}
	return (contador);
}
