#include <stdio.h>
#include "main.h"

/**
 * main - A program that prints the number of arguments passed into it
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

