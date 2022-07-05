#include "main.h"
/**
* main - print_alphabet_x10
*
* return: always 0.
*/
void print_alphabet_x10(void)
{
int print_alphabet_x10t;
int count;
count = 0;
while (count < 10)
{
for (print_alphabet_x10 = 'a' ; print_alphabet_x10 <= 'z'; print_alphabet_x10++)
{
_putchar(print_alphabet_x10);
}
count++
_putchar('\n');
}
}
