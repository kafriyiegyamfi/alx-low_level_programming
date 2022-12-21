#include "main.h"

/**
 * puts2 - this is a function that prints every other character in a string.
 *
 * @str : this is a pointer to string
 *
*/

void puts2(char *str)
{
int index = 0;

while (str[index] != '\0')
{
if (index % 2 == 0)
{
_putchar(str[i]);
}
index++;
}
}
