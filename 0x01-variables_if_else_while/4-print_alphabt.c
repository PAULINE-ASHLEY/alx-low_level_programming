#include <stdio.h>

/**
 * main -End point
 *
 * Return:Always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
        if (ch == 'q' || ch == 'e')
	{
	continue;
        }
        putchar(ch);
	}
	putchar('\n');
	return (0);
}
