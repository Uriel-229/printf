#include "main.h"

/**
 *  countdigit - counts the digits.
 * @number: input integer
 * Return: digit count
  **/

int countdigit(int number)
{
	int count = 0;
	int number2 = number;

	if (number <= 0)
		count += 1;

	while (_abs(number2) != 0)
	{
		number2 = number2 / 10;
		count++;
	}
	return (count);
}
