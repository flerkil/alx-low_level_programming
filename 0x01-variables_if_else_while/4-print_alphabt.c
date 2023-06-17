#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* main - Prints the alphabet without q and e.
*
* Return: Always 0.
*/
	int main(void)
{
	int i = 0;
	char n[26] = "abcdefghijklmnopqrstuvwxyz";
	for (i = 0; i < 26; i++ )
    {
	if (i! = 16 && i != 4)
{
	putchar(n[i]);
}
}
	putchar('\n');
	return 0;
}
