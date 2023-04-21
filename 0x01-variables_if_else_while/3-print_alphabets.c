#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the value of n status:
 *      greater than, is zero and is not less then 6
 *
 * Return: 0 (seccess)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';
	/*print a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	/*print A - z*/
	while (CH <= 'z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
