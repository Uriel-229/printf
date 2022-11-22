#include "main.h"
/**
 * _putchar -  writes thee character c to print stdout
 * @c: char to be printed
 * Return: 1 on success
 */
int _putchar(char c)
{
	static int bufferCount;
	static char buffer[1024];

	if (c == -1)
	{
		bufferCount = 0;
		return (0);
	}
	if (c == -2 || bufferCount == 1024)
	{
		write(1, buffer, bufferCount);
		bufferCount = 0;
	}
	if (c != -1 && c != -2)
	{
		buffer[bufferCount] = c;
		bufferCount++;
		return (1);
	}
	return (0);
}
