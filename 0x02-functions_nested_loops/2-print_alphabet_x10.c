#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * followed by a new line
 */
void print_alphabet_x10(void)
{

	char p;
	int i;

	i = 0;
	while (i < 10)
	{
		p = 'a';
		while (p <= 'z')
		{
			_putchar(p);
			p++;
		}
		_putchar('\n');
		i++;
	}
}
