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

	if (character == -1)
	{
		bufferCount = 0;
		return (0);
	}
	if (character == -2 || bufferCount == 1024)
	{
		write(1, buffer, bufferCount);
		bufferCount = 0;
	}
	if (character != -1 && character != -2)
	{
		buffer[bufferCount] = character;
		bufferCount++;
		return (1);
	}
	return (0);
}
