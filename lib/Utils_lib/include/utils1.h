/*
** EPITECH PROJECT, 2017
** [N/A]
** File description:
** Utils functions header
** I need to add my_get_nbr()
*/
#ifndef UTILS_H
	#define UTILS_H

	#include <stdbool.h>
	#include <stdlib.h>
	#include <unistd.h>

	static const char	INVALID_MALLOC[] = "Invalid malloc !\n";

	/* Prototypes */
	int my_char_count(char *str, char c);
	int my_int_error(char const *str);
	unsigned int my_nbrlen(int nbr);
	unsigned int my_nb_digits(int nbr);
	void *my_ptr_error(char const *str);
	void my_putchar(char c);
	int my_putnbr(int nbr);
	int my_putstr_error(char const *str);
	int my_putstr(char const *str);
	unsigned int my_putunbr(unsigned int unbr);
	char *my_strcpy(char *dest, char const *src);
	char *my_strdup(char const *str);
	int my_strequal(const char *s1, const char *s2);
	int my_strlen(char const *str);
	char *my_strncpy(char *dest, char const *src, int n);
	unsigned int my_unbrlen(unsigned int unbr);
#endif
