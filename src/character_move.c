/*
** ETNA PROJECT, 05/10/2018 by griol_s
** character move
** File description:
**      [...]
*/

#include "not_rp1.h"

void my_putchar(char c);

void my_putnbr(int n);

void my_putstr(char *str);

int character_move(character_t *target, direction_e dir)
{
    if (COND_B_L(dir) == 1 || COND_F_R(dir) == 1)
        {
            my_putstr("id [");
            my_putnbr(target->id);
            if (dir == E_FORWARD) {
                target->coord[E_Y]--;
                my_putstr("] moves forward.\n\0");
            }
            else if (dir == E_BACKWARD) {
                target->coord[E_Y]++;
                my_putstr("] moves backward.\n\0");
            }
            else if (dir == E_RIGHT) {
                target->coord[E_X]--;
                my_putstr("] moves right.\n\0");
            }
            else if (dir == E_LEFT) {
                target->coord[E_X]++;
                my_putstr("] moves left.\n\0");
            }
        }
    else
        my_putstr("Syntax error, try again :p.\n");
    return 0;
}
