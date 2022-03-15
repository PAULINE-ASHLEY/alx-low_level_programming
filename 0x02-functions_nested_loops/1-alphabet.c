#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char p;
	p = 'a';

	while (p <= 'z')
	{
		_putchar(p);
		p++;
	}
	
	_putchar('\n');

}
