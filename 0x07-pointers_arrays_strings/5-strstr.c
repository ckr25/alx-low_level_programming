#include "main.h"
/**
 * _strstr - entry point
 * @haystack: input
 * @needle: input
 * Return: void
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haustack++)
	{
		char *l = haystack;
		char *p = needle

			while (*l == *p && *p != '\0')
			{
				l++;
				p++;
			}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
