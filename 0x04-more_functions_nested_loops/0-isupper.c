#include "main.h"

/**
* _isupper - causes an infinite loop
* @c: the char we will check
* Return: 1 if c is uppercase and 0 otherwise.
*/

int _isupper(int c)
{
if (c >= 'a' && c <= 'z')
{
return (0);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
return (0);
}
