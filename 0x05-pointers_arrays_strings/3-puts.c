#include "main.h"

/**
 * _puts- A function that prints a string, and add a new line
 *
 *@str: this is the input string
 *
 */

void _puts(char *str)
{
int index;
for (index = 0; str[index] != '\0'; index++)
{
_putchar(str[index]);
}
_putchar('\n');
}
