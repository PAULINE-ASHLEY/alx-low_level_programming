#include "main.h"
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: displays a string
 *
 * Return: Always 0
 */
int _strlen(char *s)
{
	char *s;
	int i;

	s = "My first strlen!";
	i = _strlen(s);
	_putchar(i);
	return (0);
}
