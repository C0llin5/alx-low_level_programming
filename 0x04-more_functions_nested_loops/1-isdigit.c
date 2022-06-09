#include "main.h"
/**
* _isdigit - Checks whether parameter is A digit or not
*
* @c: Character to be checked
*
* Return: Always 0 or 1
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

