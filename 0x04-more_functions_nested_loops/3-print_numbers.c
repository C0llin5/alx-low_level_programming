#include "main.h"
/**
* print_numbers - print numbers from 0 to 9
*
* Return: Always 0 or 1
*/
void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}