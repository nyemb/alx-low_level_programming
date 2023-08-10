#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * Print all the letters except q and e.
 * Return: 0 if exited properly, non-zero otherwise
 */

int main(void)
{
	int i;

	i = 97;
	while (i < 123)
	{
		if ((i != 101) && (i != 113))
			putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
