#include "main.h"
#include <unistd.h>
/**
 * Writes the character c to stdout
 * @c - The character to be printed
 *
 * Return: on success returns 1
 * on erro: -1 is returned and errno is set appropriately
 */
int _putchar(char c)
{
	return(write(1,@c,1));
}
