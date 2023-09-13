#include "main.h"
/**
 * -islower- checks for lower case characters
 *  @c - The character to be checked
 *  Return: 1 for loweercase characters or zero for  anything else
 */
int -islower(int c)
{
	if ( c >= 97 && c <= 122 )
	{
	return (1);
	}
return (0);
}
