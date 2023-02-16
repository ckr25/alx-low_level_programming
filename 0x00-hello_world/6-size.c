#include <stdio.h>
/*
 * main - Entry point
 *
 * description: using sizeof to print the size of various objects
 * return: Always 0 (Success)
 */
int main(void)
{
	/* sizeof evaluates the size of variables*/
	printf("size of a char: %lu byte(s)\n", sizeof(char));
	printf("size of an int: %lu byte(s)\n", sizeof(int));
	printf("size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
