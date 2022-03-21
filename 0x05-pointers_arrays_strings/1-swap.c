#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: int for pointer a
 * @b: int for pointer b
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int c;

	*a = 98;
	*b = 42;

	_putchar(*a);
	_putchar(*b);

	c = *a;
	*a = *b;
	*b = c;

	_putchar(*a);
	_putchar(*b);
}
