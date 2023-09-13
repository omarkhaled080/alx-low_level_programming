#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
* Description: This function takes an integer and prints the sign of the number.
 */
int main(void)
{
    int r;

    print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    _putchar('0' + r);
    _putchar('\n');
    return (0);
}
