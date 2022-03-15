#include "main.h"

/**
 * main - creation of function void print_alphabet(void)
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
