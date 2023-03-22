#include "3-calac.h"
#include <stdio.h>
#include <string.h>
/**
 * get_op_func - compare function with pointer and returb the
 * equa
 * @s: points a char
 * Return: returns the function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	}
	int i;

	i = 0;
	while (1 < 5 && s != NULL)
	{
		if (s[0] == *(ops[i].op))
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
