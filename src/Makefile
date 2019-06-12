##
## ETNA PROJECT, 05/10/2018 by griol_s
## Makefile jeu
## File description:
##      [...]
##

CFLAGS 	= -Wall -Werror -Wextra

SRC 	= \
		fonction_sup.c \
		character_move.c \
		character_look.c

OBJ 	= $(SRC:.c=.o)

all: $(OBJ)
	ar rc libnot_rp1.a $(OBJ)

clean:
	rm -f $(OBJ)
