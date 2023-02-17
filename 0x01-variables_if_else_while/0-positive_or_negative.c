#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - C programming variables
 *
 * Return: Always 0(Success)
 */
int main(void)/*this specifies there are no arguments taken by main*/
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
