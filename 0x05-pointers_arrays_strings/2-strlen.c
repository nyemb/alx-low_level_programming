#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: take a string as parameter
 * Return: an interger who is the length of s
 */

int _strlen(char *s)
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (s[i])
	{
		count++;
		i++;
	}
	return (count);
}

