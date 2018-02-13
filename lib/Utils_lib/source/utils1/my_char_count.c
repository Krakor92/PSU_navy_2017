/*
** EPITECH PROJECT, 2017
** [Minishell1]
** File description:
**
** my_char_count =
** Count the number of occurence of a char in a str
**
** @param	str	String to parse
** @param	c	Character to count
** @return	Number of {c} in {str}
*/
int my_char_count(char *str, char c)
{
	int i = 0;

	for(; *str != 0; str++) {
		if (*str == c)
			++i;
	}
	return (i);
}
