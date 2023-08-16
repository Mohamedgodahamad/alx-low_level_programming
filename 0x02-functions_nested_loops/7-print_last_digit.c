#include "main.h"
/**
 * print_last_digit- prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: the value of the last digit
*/
int print_last_digit(int n)
{
	int k;

	if (n < 0)
		n = -n;

	k = n % 10;

	if (k < 0)
		k = -k;

	_putchar(k + '0');
	return (k);
}
