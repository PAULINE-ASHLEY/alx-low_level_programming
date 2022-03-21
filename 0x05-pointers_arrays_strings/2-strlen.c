#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: displays a string
 *
 * Return: Always 0
 */
int _strlen(char *s)
{ 
	*s = s;
	s = "My first strlen!";
	int len;

	len = strlen(s);

	_putchar(len);

	return (0);
}
