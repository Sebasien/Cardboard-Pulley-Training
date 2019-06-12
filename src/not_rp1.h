/*
** ETNA PROJECT, 05/10/2018 by griol_s
** enum struct
** File description:
**      [...]
*/

#define COND_B_L(a) ((a == E_BACKWARD || a == E_LEFT) ? (1) : (0))

#define COND_F_R(a) ((a == E_FORWARD || a == E_RIGHT) ? (1) : (0))

#define NORTH_SOUTH(a) ((a == E_NORTH || a == E_SOUTH) ? (1) : (0))

#define EAST_WEST(a) ((a == E_EAST || a == E_WEST) ? (1) : (0))

const int INV_SIZE = 20;

enum direction_e {
    E_FORWARD, E_BACKWARD, E_LEFT, E_RIGHT
};
typedef enum direction_e direction_e;

enum character_type_e {
    E_PLAYER, E_GUARD, E_CAMERA, E_DOG
};
typedef enum character_type_e charact_type;

enum coord {
    E_X, E_Y
};
typedef enum coord coord;

enum cardinal_point_e {
    E_NORTH = 0, E_EAST = 90, E_SOUTH = 180, E_WEST = 270
};
typedef enum cardinal_point_e cardinal_point_e;

enum item_type_e {
    E_KEY, E_DOOR, E_GUN, E_KNIFE
};
typedef enum item_type_e item_type_e;

struct charact_t
{
    unsigned int id;
    charact_type type;
    cardinal_point_e azimuth;
    int coord[2];
};
typedef struct charact_t character_t;

struct item_t
{
    unsigned int id_o;
    item_type_e type_o;
};
typedef struct item_t item_t;

struct inventory_t
{
    unsigned int id_i;
    item_type_e type_i;
};
typedef struct inventory_t inventory_t;

void my_putchar(char c);

void my_putnbr(int n);

void putstr(char *str);

int character_move(character_t *target, direction_e dir);

int character_look(character_t *target, cardinal_point_e cardinal_point);
