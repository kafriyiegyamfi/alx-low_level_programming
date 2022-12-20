#include "main.h"

/**
 * print_rev - a funtion that takes a string and prints the string in reverse
 *
 * @s :this is the input string
 *
 */

void print_rev(char *s)
{
int index;
for (index = 0; s[index] != '\0'; index++)
;
for (index = index - 1 ; index > -1; index--)
{
_putchar(s[index]);
}
_putchar('\n');
}
