##
## EPITECH PROJECT, 2017
## [N/A]
## File description:
## My lib's Makefile
##
CFLAGS	+=	-I include/

SRC_DIR	=	source/

SRC	=	$(SRC_DIR)utils1/my_char_count.c	\
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
		$(SRC_DIR)my_printf/base_converter_flags.c	\
		$(SRC_DIR)my_printf/base_converter.c	\
		$(SRC_DIR)my_printf/basic_flags.c	\
		$(SRC_DIR)my_printf/my_printf.c	\
		$(SRC_DIR)my_printf/specific_flags.c

OBJ	=	$(SRC:.c=.o)

HDR_DIR	=	include/

HDR	=	$(HDR_DIR)my_printf.h	\
		$(HDR_DIR)utils1.h

LIBNAME =	vf

LIB	=	lib$(LIBNAME).a



all:	$(LIB)

$(LIB):	$(OBJ) $(HDR)
	ar -rc $@ $^
	ranlib $@

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(LIB)

re:	fclean $(LIB)

.PHONY:	all clean fclean re
