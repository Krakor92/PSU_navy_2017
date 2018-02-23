/*
** EPITECH PROJECT, 2018
** [NAVY] {Eyal ZEITOUN} {Vincent FAIVRE}
** File description:
** player1.c
*/

#include "navy.h"

int pid_opponent;

void player2_connection(int signum, siginfo_t *siginfo, void *ucontext)
{
	(void) signum;
	(void) ucontext;
	my_putstr("enemy connected\n\n");
	pid_opponent = siginfo->si_pid;
	kill(siginfo->si_pid, SIGUSR1);
}

void waiting_player2(void)
{
	struct sigaction handle_sig;

	sigemptyset(&handle_sig.sa_mask);
	handle_sig.sa_flags = SA_SIGINFO;
	handle_sig.sa_sigaction = player2_connection;
	sigaction(SIGUSR1, &handle_sig, NULL);
	pause();
}

int player1(void)
{
	pid_t pid_player1 = getpid();

	my_printf("my_pid:\t%d\nwaiting for enemy connection...\n\n",\
	pid_player1);
	waiting_player2();
	my_printf("Opponent pid: %d\n", pid_opponent);
	return (SUCCESS);
}
