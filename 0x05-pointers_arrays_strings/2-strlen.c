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
	char *s[16] = "My first strlen!";
	int i;

	for (i = 0; *s[i] != '\0'; ++i);
	_putchar(i);

	return (0);
}
