#include <stdio.h>

/**
 * main - End point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch;

	srand(time(0));
	ch = rand() - RAND_MAX / 2;
	/* your code goes here */
	if (n < 0)
	{
		printf("%d is %s\n", n, "negative");
	}
	else if (n > 0)
	{
		printf("%d is %s\n", n, "positive");
	}
	else 
	{
		printf("%d is %s\n", n, "zero");
	}
	return (0);
}
