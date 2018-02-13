/*
** EPITECH PROJECT, 2017
** Projet -> unit_test.c
** File description:
** Unit_tests
*/

#include <criterion/criterion.h>

/*
EXEMPLE :

int	sum_stdarg(int i, int nb, ...);

Test(sum_stdar, return_correct_when_ret_is_zero)
{
	int ret = sum_stdarg(0, 3, 21, 25, -4);

	cr_assert(ret == 0);
}

Test(sum_stdarg, return_correct_when_ret_is_less_than_zero)
{
	int ret = sum_stdarg(0, 3, 21, 25, -4);

	cr_assert(ret <= 0);
}

Test(sum_stdarg, return_correct_when_ret_is_more_than_zero)
{
	int ret = sum_stdarg(0, 3, 21, 25, -4);

	cr_assert(ret >= 0);
}
*/