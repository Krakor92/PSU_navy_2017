/*
** EPITECH PROJECT, 2018
** [NAVY] {Eyal ZEITOUN} {Vincent FAIVRE}
** File description:
** My main function
*/

#include "navy.h"

/*
** print_help =
** Print the help message
**
** @param	N/A
** @return	N/A
*/
static void print_help(void)
{
	my_putstr("Project created in language C by Eyal ZEITOUN and ");
	my_putstr("Vincent FAIVRE\n\n");
	my_putstr("USAGE\n ./navy [first_player_pid] navy_positions\n\n");
	my_putstr("DESCRIPTION\n ");
	my_putstr("first_player_pid\t(only for the 2nd player) ");
	my_putstr("pid of the first player.\n ");
	my_putstr("navy_positions\t\tfile representing the positions ");
	my_putstr("of the ships.\n\n");
	my_putstr("OPTIONS\n -h\tprint the help and quit.\n");
}

int navy(int ac, char **av)
{
	int pid_player1;
	int retval;

	if (ac == 1)
		player1();
	if (ac == 2) {
		retval = my_getnbr(av[1], &pid_player1);
		if (retval == -1)
			return (FAILURE);
		player2(pid_player1);
	}
	return (SUCCESS);
}

/*
** main =
** My main function, that's all
**
** @param	ac	Number of program's arguments
** @param	av	Double array that contains program's arguments
** @return	SUCCESS(0) if everything is ok OR FAILURE(84) if it fails
*/
int main(int ac, char **av)
{
	if (ac == 2 && my_strequal(av[1], "-h")) {
		print_help();
		return (SUCCESS);
	}
	navy(ac, av);
	return (SUCCESS);
}
