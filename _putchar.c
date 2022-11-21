#include "main.h"
/**
 * _putchar -  writes thee character c to print stdout
 * @c: char to be printed
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
