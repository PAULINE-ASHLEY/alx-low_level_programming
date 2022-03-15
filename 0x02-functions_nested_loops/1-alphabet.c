#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a newline
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
