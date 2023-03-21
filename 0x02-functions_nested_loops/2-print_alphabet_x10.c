#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet_x10(void)
{
    
    char c;
    int t = 0;
    while (t <= 9)
    {
        for (c = 'a'; c < 'z'; c++)
        {
          _putchar(c);
        }
        _putchar('\n');
        t++;
    }
    
   
    
}