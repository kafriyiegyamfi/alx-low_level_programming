#include "main.h"

int main(void)
{
char word[9]='_putchar';
for (int x = 0 ; x < 8; x++)
{
_putchar(word[x]);
}
_putchar('\n');
return (0);
}
