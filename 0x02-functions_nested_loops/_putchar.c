#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 *@c: is the data type and the character to print
 *return: always return 1, if successfull
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
