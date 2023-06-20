#include "main.h"
/**
 * _isalpha - check if char is lowercase
 * @c : char that we will check
 * Return: 1 if char is  a letter, lowercase or uppercase, otherwise 0.
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}

