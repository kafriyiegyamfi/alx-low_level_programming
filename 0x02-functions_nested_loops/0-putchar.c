#include "main.h"

/**
  * main - print _putchar
  *
  * Return: 0
  */

int main(void)
{
char word[9] = "_putchar";
int x;
for (x = 0 ; x < 8; x++)
{
_putchar(word[x]);
}
_putchar('\n');
return (0);
}
