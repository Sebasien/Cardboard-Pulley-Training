/*
** ETNA PROJECT, 05/10/2018 by griol_s
** clear inventory
** File description:
**      [...]
*/

#include "not_rp1.h"

void clear_inventory(inventory_t *)
{
    free(inventory);
}
    
