#include "main.h"

/**
 * *_strcpy - a function that copies string in a pointer to another location.
 *
 * @dest: first argumaent the destination where the string will be copied to.
 *
 * @src: Second argument, the pointer to the string in memory.
 *
 * Return: Always char pointer to destination.
 *
*/

char *_strcpy(char *dest, char *src)
{
int index;

for (index = 0; src[index] != '\0'; index++)
dest[index] = src[index];

dest[index] = src[index];

return (dest);

}
