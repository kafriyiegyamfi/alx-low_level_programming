#include "main.h"

/**
 * print_rev - a funtion that takes a string and prints the string in reverse
 *
 * @s :this is the input string
 *
 */

void print_rev(char *s)
{
int index, length;
length = _strlen(*s);
for (index = length ; index > -1; index--)
{
_putchar(s[index]);
}
_putchar('\n');
}
