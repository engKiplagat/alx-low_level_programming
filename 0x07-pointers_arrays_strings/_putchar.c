#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c the character to print
 * Return on success it gives 1
 * on error, -1 is returned and error no is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}	
		
