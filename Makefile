##
## EPITECH PROJECT, 2017
## [N/A] {Vincent FAIVRE}
## File description:
## My compilation's Makefile
##
## Variables génériques:
## $? -> Liste des dépendances qui ont été modifiées
## $^ -> Liste de toutes les dépendances
## (ces dernières doivent contenir les chemins vers leurs fichiers)
## $+ -> Comme au dessus mais les doublons sont supprimés
## $@ -> La cible courante (cible de la règle où on se trouve)
## $< -> Représente la première dépendance
##
## lib: c_graph_prog (CSFML), m (math)...
##

CC	=	gcc -D_POSIX_C_SOURCE

CFLAGS	+=	-W -Wall -Wextra -pedantic -g3 -std=c99 -I include/

RM	=	rm -f

SRC_DIR	=	source/
HDR_DIR	=	include/
UT_DIR	=	tests/

SRC	=	$(SRC_DIR)oldProject/my_printf/base_converter_flags.c	\
		$(SRC_DIR)oldProject/my_printf/base_converter.c	\
		$(SRC_DIR)oldProject/my_printf/basic_flags.c	\
		$(SRC_DIR)oldProject/my_printf/my_printf.c	\
		$(SRC_DIR)oldProject/my_printf/specific_flags.c	\
		$(SRC_DIR)dlist/str_dlist/delete_dlist.c	\
		$(SRC_DIR)dlist/str_dlist/double_str_list.c	\
		$(SRC_DIR)dlist/str_dlist/insert_n_get_str_dlist.c	\
		$(SRC_DIR)utils1/my_char_count.c	\
		$(SRC_DIR)utils1/my_getnbr.c	\
		$(SRC_DIR)utils1/my_int_error.c	\
		$(SRC_DIR)utils1/my_nbrlen.c	\
		$(SRC_DIR)utils1/my_ptr_error.c	\
		$(SRC_DIR)utils1/my_putchar.c	\
		$(SRC_DIR)utils1/my_putnbr.c	\
		$(SRC_DIR)utils1/my_putstr_error.c	\
		$(SRC_DIR)utils1/my_putstr.c	\
		$(SRC_DIR)utils1/my_putunbr.c	\
		$(SRC_DIR)utils1/my_strcpy.c	\
		$(SRC_DIR)utils1/my_strdup.c	\
		$(SRC_DIR)utils1/my_strequal.c	\
		$(SRC_DIR)utils1/my_strlen.c	\
		$(SRC_DIR)utils1/my_strncpy.c	\
		$(SRC_DIR)utils1/my_unbrlen.c	\
		$(SRC_DIR)utils2/2d_arrays/create_2d_arr.c	\
		$(SRC_DIR)utils2/2d_arrays/destroy_2d_arr.c	\
		$(SRC_DIR)main.c	\
		$(SRC_DIR)player1.c	\
		$(SRC_DIR)player2.c

OBJ	=	$(SRC:.c=.o)

HDR	=	$(HDR_DIR)str_dlist.h	\
		$(HDR_DIR)my_printf.h	\
		$(HDR_DIR)navy.h	\
		$(HDR_DIR)utils1.h	\
		$(HDR_DIR)utils2.h

NAME	=	navy



all:	$(NAME)

$(NAME):	$(OBJ) $(HDR)
	$(CC) -o $@ $(OBJ)

tests_run:
	$(MAKE) -C $(UT_DIR)

clean:
	$(RM) $(OBJ)
	./mr_clean

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
