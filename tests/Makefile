##
## EPITECH PROJECT, 2017
## [N/A]
## File description:
## My test's  Makefile
##
## WARNING: Criterion uses its own main(void);
## Having a main() in any .c file will have the build fail
##
CC	=	gcc

CFLAGS	+=	-W -Wall -Wextra -pedantic -g3 -std=c99

LDFLAGS	+=	-lcriterion -lgcov --coverage

SRC_DIR	=	../source/
SRC_UT_DIR	=	./
LIB_DIR	=	../lib/Utils_lib/

SRC	=	$(SRC_DIR)main.c

SRC_UT	=	$(SRC_UT_DIR)unit_tests.c

OBJ	=	$(SRC:.c=.o) $(SRC_UT:.c=.o)

LIBNAME	=	utils

FULLLIBNAME	=	$(LIB_DIR)lib$(LIBNAME).a

NAME	=	test



all:	$(NAME) tests

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(FULLLIBNAME) $(CFLAGS) $(LDFLAGS)

tests:	$(NAME) $(OBJ)
	-./$(NAME) --verbose

clean:
	rm -f $(OBJ)
	rm -f *~
	rm -f \#*
	rm -f *.gcda
	rm -f *.gcno

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all tests clean fclean re