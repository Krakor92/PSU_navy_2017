/*
** EPITECH PROJECT, 2017
** my_printf_2017 -> my_printf.h
** File description:
**
*/
#ifndef	MY_PRINTF_H
	#define MY_PRINTF_H

	#include <stdarg.h>
	#include "utils1.h"

	static const int BINARY_BUFFER = 32;
	static const int OCTAL_BUFFER = 11;
	static const int HEXA_BUFFER = 8;

	typedef struct converter_flags
	{
		int (*ptrfunction)(va_list);
		char keyword;
	} converter_t;

	int my_printf(const char *fmt, ...);
	int b_flag(va_list ap);
	int c_flag(va_list ap);
	int di_flag(va_list ap);
	int o_flag(va_list ap);
	int p_flag(va_list ap);
	int s_flag(va_list ap);
	int u_flag(va_list ap);
	int x_flag(va_list ap);
	int majx_flag(va_list ap);
	int percent_flag(va_list ap);
	//base converter
	int dec_to_binary_base(unsigned int dec_int);
	int dec_to_octal_base(unsigned int dec_int);
	int dec_to_hexa_base(unsigned int dec_int);
	int dec_to_majhexa_base(unsigned int dec_int);
	int print_converted_arr(int nb_size, char *converted_arr);
#endif
