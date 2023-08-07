#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the function
 * @argc: counts the arguments passed to the function
 * @argv: gives the value arguments passed to the function for char
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, res = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			res *= atoi(argv[i]);
		}
		printf("%d\n", res);
	}
	return (0);
}
