#include "main.h"
/**
 * _isupper -uppercase letters
 * @c: Char to be checked
 *
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if(c >= 'A' && <= 'Z')
		return(1);
	else
		return (0);
}
