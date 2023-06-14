#include <stdio.h>
/**
 * main - prints the function
 * @argv: is an argument determiner for char
 * @argc: is an argument counter for int
 * Return: Always success
 **/
int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)

		printf("%s\n", argv[i]);

	return (0);
}
