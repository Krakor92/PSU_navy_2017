##
## EPITECH PROJECT, 2017
## [N/A]
## File description:
## My compilation's Makefile
##
## Variables génériques:
## $? -> Liste des dépendances qui ont été modifiées
## $^ -> Liste de toutes les dépendances \
## (ces dernières doivent contenir les chemins vers leurs fichiers)
## $+ -> Comme au dessus mais les doublons sont supprimés
## $@ -> La cible courante (cible de la règle où on se trouve)
## $< -> Représente la première dépendance
##
CC	=	gcc

CFLAGS	+=	-W -Wall -Wextra -pedantic -g3 -std=c99 -I include/

LDLIBS	+=	-L$(UTILS_LIBDIR) -l$(UTILS_LIBNAME)

RM	=	rm -f

SRC_DIR	=	source/

SRC	=	$(SRC_DIR)main.c

OBJ	=	$(SRC:.c=.o)

NAME	=	navy

HDR_DIR	=	include/

HDR	=	$(HDR_DIR)projet.h	\
		$(HDR_DIR)my_printf.h	\
		$(HDR_DIR)utils1.h

UTILS_LIBDIR	=	lib/Utils_lib/
UTILS_LIBNAME	=	utils

TESTS_DIR	=	tests/



all:	$(NAME)

$(NAME):	$(UTILS_LIBNAME) $(OBJ) $(HDR)
	$(CC) -o $@ $(OBJ) $(LDLIBS)

$(UTILS_LIBNAME):
	$(MAKE) -C $(UTILS_LIBDIR)

tests_run:
	$(MAKE) -C $(TESTS_DIR)

clean:
	$(RM) $(OBJ)
	./mr_clean

libclean:
	$(MAKE) fclean -C $(UTILS_LIBDIR)

fclean:	clean libclean
	$(RM) $(NAME)

re:	fclean $(NAME)

.PHONY: all clean fclean re
