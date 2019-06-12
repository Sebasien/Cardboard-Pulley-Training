/*
** ETNA PROJECT, 05/10/2018 by griol_s
** fonction sup
** File description:
**      [...]
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putnbr(int n)
{
    int i = 1;
    int nbr[12];
    if (n < 0) {
        my_putchar(45);
        n = -n;
    }
    nbr[0] = n % 10;
    while (n / 10 >= 1) {
        n = n / 10;
        nbr[i] = n % 10;
        i++;
    }
    i = i - 1;
    while (i >= 0) {
        my_putchar(nbr[i] + 48);
        i = i - 1;
    }
}

void my_putstr(char *str)
{
    int i = 0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i = i + 1;
    }
}
