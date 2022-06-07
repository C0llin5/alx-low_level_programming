#include "main.h"
/**
* _abs - outputs absolut value of integer input
* @n: integer to check
* Return: n
*/
int _abs(int n)
{
	return (n * ((n > 0) - (n < 0)));
}
