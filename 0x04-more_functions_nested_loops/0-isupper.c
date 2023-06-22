#include "main.h"

/**
 * _isupper - checks for lowercase character
 * @c: The charaxter to be checked
 * Return: 1 of uppercasr character or 0 for anything else
 */

int _isupper(int c)

{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
