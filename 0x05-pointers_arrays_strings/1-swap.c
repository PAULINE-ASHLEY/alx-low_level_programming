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
	*a = 98;
	*b = 42;

	_putchar(*a);
	_putchar(*b);

	int temp = *a;
	*a = *b;
	*b = temp;

	_putchar(*a);
	_putchar(*b);
}
