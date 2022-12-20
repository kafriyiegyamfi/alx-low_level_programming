#include "main.h"

/**
 * swap_int - A function that take two interger pointers and exchanges
 * the values they are pointing to.
 *
 * @a : this is the first argument
 * @b : this is the second argument
 *
 */

void swap_int(int *a, int *b)
{
int change_var;
change_var = *a;
*a = *b;
*b = change_var;
}
