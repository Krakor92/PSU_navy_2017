/*
1;4803;0c** EPITECH PROJECT, 2017
**
** File description:
**
*/
#include "my_printf.h"

int	c_flag(va_list ap)
{
	int d = (char) va_arg(ap, int);
	my_putchar(d);
	return (1);
}

int	di_flag(va_list ap)
{
	int d = va_arg(ap, int);
	return (my_putnbr(d));
}

int	s_flag(va_list ap)
{
	char *s = va_arg(ap, char*);
	return (my_putstr(s));
}

int	u_flag(va_list ap)
{
	unsigned int u = va_arg(ap, unsigned int);
	return (my_putunbr(u));
}
