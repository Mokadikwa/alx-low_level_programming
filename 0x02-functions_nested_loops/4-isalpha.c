#include "main.h"
#include <ctype.h>

/**
 * _isalpha - function checks for alphabetic character
 * @c: 'checks value of characters'
 * Return: 1 if c is a letter, lower or uppercase, return 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));

}
