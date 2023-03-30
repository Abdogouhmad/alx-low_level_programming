#include "main.h"
/**
 * print_number - prints integers enters as parameters using putchar
 * @n: integer to print
 * Return: void
 */
void print_number(int n)
{
 int digits[10];
    int i = 0;
    if (n == 0) {
        _putchar('0');
        return;
    }
    if (n < 0) {
        _putchar('-');
        n = -n;
    }
    while (n > 0) {
        digits[i] = n % 10;
        n /= 10;
        i++;
    }
    while (i > 0) {
        i--;
        _putchar(digits[i] + '0');
    }
}