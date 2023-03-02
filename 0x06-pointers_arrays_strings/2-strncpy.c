#include "main.h"
/**
 * _strncpy - function that copies string
 * @src: the source of the strings
 * @dest: the destination of the string
 * @n: length of int
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}

	for (; i < n; i++)
	{
		*(dest + 1) = '\0';
	}
	return (dest);
}
