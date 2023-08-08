#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 * @s1: contains contents of str1
 * @s2: contains contents of str2
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *new_string;
	int index;
	int concat_index = 0;
	int len = 0;

	if (s1 = NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
		len++;

	new_string = malloc(sizeof(char) * len);

	if (new_string == NULL)
		return (NULL);
	for (index = 0; s1[index]; index++)
		new_string[concat_index++] = s1[index];
	for (index = 0; s2[index]; index++)
		new_string[concat_index++] = s2[index];

	return (new_string);
}
