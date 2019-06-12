/*
** ETNA PROJECT, 05/10/2018 by griol_s
** new inventory
** File description:
**      [...]
*/

#include "not_rp1.h"

inventory_t *new_inventory();
{
    inventory_t *inventory;
    int i = 0;
    while (i != INV_SIZE) {
        inventory[i] = NULL;
        i++;
    }
    inventory = malloc(sizeof(inventory_t) * INV_SIZE);
    if (!(inventory))
        return NULL;
    return inventory;
}
