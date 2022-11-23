#include "main.h"

/**
 * _abs - calculates the absolute value.
 * @number: input.
 * Return: value.
 */
int _abs(int number)
{
	if (number < 0)
		return (-1 * number);
	else
		return (number);
}
