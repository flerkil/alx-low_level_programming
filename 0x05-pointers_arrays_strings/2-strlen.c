#include "main.h"

/**
* swap_int -  returns the length of a string.
*@s: input
* Return: length of a string.
*/
int _strlen(char *s)
{
int length = 0;

while (*s != '\0')
{
length++;
s++;
}
return (length);
}
