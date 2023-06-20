#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10- print all alphabet in lowercase X10
 * Return: 0
 */

void print_alphabet_x10(void)
{
char n[26] = "abcdefghijklmnopqrstuvwxyz";

int i, j;

for (j = 0; j < 10; j++)
{
for (i = 0; i < 26; i++)
{
_putchar(n[i]);
}
_putchar('\n');
}
}
