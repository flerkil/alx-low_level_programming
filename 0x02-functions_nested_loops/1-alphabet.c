#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - print all alphabet in lowercase
 * Return: 0
 */

void print_alphabet(void)
{
char n[26] = "abcdefghijklmnopqrstuvwxyz";

int i;

for (i = 0; i < 26; i++)
{
_putchar(n[i]);
}
_putchar('\n');
}
