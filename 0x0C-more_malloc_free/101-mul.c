#include <stdlib.h>
#include <stdio.h>
/**
 * main - a programme that multiplies two positive numbers
 * @argc: number of arguments passed
 * @argv: an array of pointers to the argument
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	char *product;
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[1] < 0 || argv[1] > 9)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2] < 0 || argv[2] > 9)
	{
		printf("Error\n");
		exit(98);
	}
}
