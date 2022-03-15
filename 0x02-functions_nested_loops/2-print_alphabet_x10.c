#include "main.h"

/**
 * main - End point
 *
 * Return: Always 0
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
