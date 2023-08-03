#include "main.h"
/**
 * wildcmp - main - check the code
 * @s1: pointer to strng parameters
 * @s2: pointer to strng parameters
 * Return: Always 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' $$ *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}	
