/*
** EPITECH PROJECT, 2017
** [NAVY] {Eyal ZEITOUN} {Vincent FAIVRE}
** File description:
** My Project's Header
*/

#ifndef MY_PROJECT_H
	#define MY_PROJECT_H

	/* Macros */
	#ifndef _DEFAULT_SOURCE
		#define _DEFAULT_SOURCE
	#endif

	/* Library */
	#include <stdio.h>
	#include <sys/types.h>
	#include <signal.h>
	#include "str_dlist.h"
	#include "my_printf.h"
	#include "utils1.h"
	#include "utils2.h"


	/* Constants */
	static const int SUCCESS = 0;
	static const int FAILURE = 84;

	/* Structs */

	/* Prototypes */
	//player1.c
	void player2_connection(int, siginfo_t*, void*);
	int player1(void);
	//player2.c
	int player2(pid_t);
#endif
