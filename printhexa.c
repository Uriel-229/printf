#include "main.h"
/**
 * printhexa - print a hexadecimal
 * @format: format to print hexadecimal
 * @pa: list that contains the hexadecimal
 * Return: number.
 */
int printhexa(char *format, va_list pa)
{
	unsigned int num = va_arg(pa, unsigned int);
	unsigned int copy;
	char *hexa;
	int i, i2 = 0, contame = 0;
	(void)format;

	if (num == 0)
		return (_putchar('0'));
	for (copy = num; copy != 0; i2++)
	{
		copy = copy / 8;
	}
	hexa = malloc(i2);
	if (!hexa)
		return (-1);
	for (i = i2 - 1; i >= 0; i--)
	{
		hexa[i] = num % 8 + '0';
		num = num / 8;
	}
	for (i = 0; i < i2 && hexa[i] == '0'; i++)
		;
	for (; i < i2; i++)
	{
		_putchar(hexa[i]);
		contame++;
	}
	free(hexa);
	return (contame);
}
