#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: take a string as a parameter
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

