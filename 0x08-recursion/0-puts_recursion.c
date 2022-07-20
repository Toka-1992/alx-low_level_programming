#include "main.h"
/**
*_puts_recursion - prints a string
*@s: pointer block of memory to fill
*Return: void
*/
void _puts_recursion(char *i)
{
if (*i == '\0')
{
_putchar('\n');
return;
}
_putchar (*i);
_puts_recursion(i + 1);
}
