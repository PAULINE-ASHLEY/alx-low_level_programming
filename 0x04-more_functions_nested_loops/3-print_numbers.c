#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0
 */
void print_numbers(void)
{
	char p;

	p = '0';

	while (p <= '9')
	{
		_putchar(p);
		p++;
	}

	_putchar('\n');
}
