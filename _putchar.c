#include <unistd.h>
/**
 * _putchar -  writes thee character c to print stdout
 * @c: char to be printed
 * Return: 1 on success
 */
int _putchar(char c)
{
	static int counter;
	static char buffer[1024];

	if (c == -1)
	{
		counter = 0;
		return (0);
	}
	if (c == -2 || counter == 1024)
	{
		write(1, buffer, counter);
		counter = 0;
	}
	if (c != -1 && c != -2)
	{
		buffer[counter] = c;
		counter++;
		return (1);
	}
	return (0);
}
