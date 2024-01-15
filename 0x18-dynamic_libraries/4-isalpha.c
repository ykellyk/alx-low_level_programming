#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: The character to check
 * Return: (1) if c is lowercase or uppercase
 *       : (0) if c is otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
