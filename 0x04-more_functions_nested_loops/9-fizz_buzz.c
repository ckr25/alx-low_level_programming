#include <stdio.h>
#include <math.h>
#include "main.h"
/**
 * fizz_buzz - function declaration
 * Description: prints fizz, buzz or fizzbuzz for multiples
 * of 3 and 5
 * @range: the end number
 * Return: void
 */
void fizz_buzz(int range)

/**
 * main - Entry point
 * Description: calls fizz_buzz
 * Return: 0
 */

int main(void)
{
	fizz_buzz(100);
	return (0);
}

/**
 * fizz_buzz - function definition
 * Description: prints fizz or buzz for multiples of 3
 * and 5
 * @range: the ending number
 * Return: void
 */

void fizz_buzz(int range)
{
	int number;

	for (number = 1; number <= range; number++)
	{
		if (number % 3 == 0 && number % 5 == 0)
		{
			printf("fizzbuzz");
		}
		else if (number % 3 == 0)
		{
			printf("fizz");
		}
		else if (number % 5 == 0)
		{
			printf("buzz");
		}
		else
		{
			printf("d", number);
		}
		if (number != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
}
