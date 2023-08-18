#include"main.h"
/**
 * _isupper - check if the character is upper
 * @c: input for alphabet
 * return :1 if it's upper , 0 if not
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
