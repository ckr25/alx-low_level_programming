#include <stdio.h>

/**
 * main - prints the function
 * @argc: is argument counter to an int
 * @argv: is an argument value determiner to a char
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
