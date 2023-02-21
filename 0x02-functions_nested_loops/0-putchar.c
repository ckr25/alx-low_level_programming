#include <main.h>
/*
 * main - Entry point 
 * prints _putchar
 *
 * return: Always 0 (success)
 */
int main(void)
{
	char output[] = "_putchar\n";
	int length = sizeof(output);

	for (int i = 0; i < length; i++)
	{
		_putchar (output[i]);
	}

	return (0);
}
