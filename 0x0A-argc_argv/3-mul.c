#include <stdio.h>
#include "main.h"

/**
 * main - a program that multiplies two numbers.
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: always 0(Success)
 */

int main(int argc, char *argv[])
{
	int result, operand1, operand2;
	
	if (argc < 3 || argc >3)
	{
		printf("Error");
		return (1);
	}
	operand1 = _atoi(argv[1]);
	operand2 = _atoi(argv[2]);
	result = operand1 * operand2;
	printf("%d\n", result);
	return (0);
}

