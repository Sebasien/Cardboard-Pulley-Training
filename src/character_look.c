/*
** ETNA PROJECT, 05/10/2018 by griol_s
** character look
** File description:
**      [...]
*/

#include "not_rp1.h"

void my_putchar(char c);

void my_putnbr(int n);

void my_putstr(char *str);

int character_look(character_t *target, cardinal_point_e cardinal_p)
{
    if (NORTH_SOUTH(cardinal_p) == 1 || EAST_WEST(cardinal_p) == 1)
        {
            my_putstr("id [");
            my_putnbr(target->id);
            if (cardinal_p == E_NORTH)
                my_putstr("] looks north.\n\0");
            else if (cardinal_p == E_SOUTH)
                my_putstr("] looks south.\n\0");
            else if (cardinal_p == E_WEST)
                my_putstr("] looks west.\n\0");
            else if (cardinal_p == E_EAST)
                my_putstr("] looks east.\n\0");
        }
    else
        my_putstr("Syntax error (again), try again :p.\n");
    return 0;
}
