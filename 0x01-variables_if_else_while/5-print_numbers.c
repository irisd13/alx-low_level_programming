#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all alphabet letters except q and e
 *
 * Return: Always  0 (Success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printif("%i", digit);
		digit++;
	}
	printif('\n');
	return (0);
}
