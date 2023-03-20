#include "main.h"
#include <stdio.h>
/**
 * main - writes a program that prints the name of the file that was compiled
 * from, followed by a new line
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
