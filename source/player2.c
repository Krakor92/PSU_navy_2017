/*
** EPITECH PROJECT, 2018
** [NAVY] {Eyal ZEITOUN} {Vincent FAIVRE}
** File description:
** player2.c
*/

#include "navy.h"


void player1_succesfully_connected(int signum)
{
	(void) signum;
	my_putstr("succesfully connected\n\n");
}

void waiting_player1(void)
{
	struct sigaction handle_sig;

	sigemptyset(&handle_sig.sa_mask);
	handle_sig.sa_flags = 0;
	handle_sig.sa_handler = player1_succesfully_connected;
	sigaction(SIGUSR1, &handle_sig, NULL);
	pause();
}

int player2(pid_t pid_player1)
{
	pid_t pid_player2 = getpid();

	my_printf("my_pid:\t%d\nTrying to connect with \
the first player...\n\n", pid_player2);
	kill(pid_player1, SIGUSR1);
	waiting_player1();
	my_printf("Opponent pid: %d\n", pid_player1);
	return (SUCCESS);
}
