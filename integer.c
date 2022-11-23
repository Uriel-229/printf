#include "main.h"

/**
 * integer - a function that prints an integer.
 * @number: input integer
 * Return: digit count
 */
int integer(int number)
{
	unsigned int unint;
	int count;

	count = countdigit(number);
	if (number < 0)
	{
		_putchar('-');
		unint = -number;
	}
	else
		unint = number;

	if (unint >= 10)
		integer(unint / 10);
	_putchar(unint % 10 + '0');
	return (count);
}
