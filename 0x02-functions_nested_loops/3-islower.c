#include "main.h"

/**
 * _islower - Checks whether a character is lowercase or not
 * @c: The character to be checked
 * 
 * Return: 1 if the character is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
