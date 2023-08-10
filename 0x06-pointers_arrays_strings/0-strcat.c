#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: destination
 * @src: appends the src string to the dest string
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0, len;

	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	len = i + j;
	dest[len] = '\0';
	return (dest);
}
