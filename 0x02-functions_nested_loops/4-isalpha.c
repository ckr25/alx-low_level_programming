#include "main.h"
/**
 * _isalpha - Entry point
 *
 * @c - character checked
 *
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 64 && (c <= 90));}
