#include <unistd.h>

/**
 * _putchar - function writes character to standard output
 * @character: The charcater to be printed
 *
 * Return: Returns the input character
 */
int _putchar(char character)
{
	return (write(1, &character, 1));
}
