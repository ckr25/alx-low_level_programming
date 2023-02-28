#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string to print
 * Return: void
 */
void puts_half(char *str)
{
	int i, len, l;

	len = 0;
	while (*(str + len) != '\0')
		len++;
	l = len;
	len = len / 2;
	if (l % 2 != 0)
	{
		len++;
	}
	for (i = 0; i < l; i++)
	{
		if (i >= len)
			_putchar(*(str + i));
	}
	_putchar('\n');
}
