#include "main.h"

/**
* print_line -    draws a straight line in the terminal.
*@n : int that we will print lines.
* Return: void
*/

void print_line(int n)
{
int j;

if (n <= 0)
{
_putchar('\n');
}
else if (n > 0)
{
for (j = 0; j < n; j++)
{
_putchar('_');
}
_putchar('\n');
}
}

