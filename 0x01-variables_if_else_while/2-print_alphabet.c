#include <stdio.h>
/**
* main - prints the alphabet in lowercase, followed by a new line.
*
* Return: Always 0.
*/
	int main(void)
{
	char n[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	for (i = 0; i < 26; i++)
{
	putchar(n[i]);
}
	putchar('\n');
	return (0);
}
