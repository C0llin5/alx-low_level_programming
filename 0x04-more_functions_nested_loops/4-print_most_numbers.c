#include "main.h"
/**
* print_most_numbers - print numbrs 0 to 9 except 2 and 4
* Return: values
*/
void print_most_numbers(void)
{
	int ch = 0;

	while (ch < 10)
	{
		if (ch != 2 && ch != 4)
		{
			_putchar(ch + '0');
		}
		ch += 1;
	}
	_putchar('\n');
}
