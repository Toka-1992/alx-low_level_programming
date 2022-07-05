#include <unistd.h>
/**
* main - function to print
*
* function: print putchar followed by a new line.
*
* Return: 0
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
