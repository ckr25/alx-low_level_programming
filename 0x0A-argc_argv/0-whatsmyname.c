#include <stdio.h>
/**
 * main - its the function that prints the name
 * @argc: is an argument counter for char
 * @argv: is an argument value for char
 * Return: Always success
 **/
int main(int argc, char *argv[])
{
	int i = argc - argc;

	printf("%s\n", argv[i]);

	return (0);
}
