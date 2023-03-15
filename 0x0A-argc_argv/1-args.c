#include <stdio.h>
/**
 * main - entry point
 * @agrc: is a counter for argument for int
 * @agrv: is a counter for value of argument to char
 * Return: always 0
 */
int main(int agrc, char *agrv[])
{
	(void)agrv;

	printf("%d\n", (agrc - 1));
	return (0);
}
