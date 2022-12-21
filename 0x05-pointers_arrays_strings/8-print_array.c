#include "main.h"
#include <stdio.h>

/**
 * print_array - unction that prints n elements of an array
 *  of integers, followed by a new line.
 *
 * @a : this is a array and first input
 *
 * @n : tyoe of int this is the number of elemnts to be printed
 *
*/

void print_array(int *a, int n)
{
int index = 0;

while (index <  n)
{
printf("%d", a[index]);

if (index != n - 1)
printf(",");
printf(" ");

index++;
}

_putchar('\n');
}
