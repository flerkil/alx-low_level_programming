#include <stdio.h>
/**
* main - Prints the alphabet.
*
* Return: Always 0 (Success)
*/
	int main(void)
{
	char n[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	for (int i; i = 0; i < 52; i++)
{
	putchar(n[i]);
}
	putchar('\n');
	return (0);
}
