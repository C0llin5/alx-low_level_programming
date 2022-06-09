#include "main.h"
/**
* print_line - prints a straight line in the terminal
*
* @n: Character
* Return: 0 or 1
*/
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		if (n > 0)
		{
			_putchar(95);
			i += 1;
		}
		else
			_putchar('\n');
	}
	_putchar('\n');
}
