/*
** proto.h for proto in /home/pinta_a/rendu/sudoki-bi
** 
** Made by pinta_a
** Login   <pinta_a@epitech.eu>
** 
** Started on  Sat Feb 27 17:34:59 2016 pinta_a
** Last update Sun Feb 28 22:00:30 2016 menett_a
*/

#ifndef PROTO_H_
# define PROTO_H_

#include <unistd.h>
#include "struct.h"

void	my_putchar(int c);
void	display_map(int map[9][9]);
void	display_x_tab(void);
void	init_tab(int tab[9]);
void	stock_map(t_sudo *sudo, char map[11][21]);
void	check_square(int map[9][9], int tab[9], int i, int j);
void	check_map(int map[9][9], int tab[9], int i, int j);
void	my_copy_buffer(char map[11][21], char buffer[21], int j);
int	good_map(int map[9][9], int i, int j, int nb);
int	good_square(int map[9][9], int i, int j, int nb);
int	is_good(int map[9][9], t_list *list, int nb);
int	is_first_line(char c, int i);
int	is_mid_line(char c);
int	find_zero(t_sudo *sudo);
int	test_first_line(char buffer[21], char map[11][21], int *j, ssize_t s);
int	test_mid_line(char buffer[21], char map[11][21], int *j);
int	check_error(char map[11][21]);
int	check_tab(int tab[9]);
int	nb_error(t_sudo *sudo, int i, int j);
int	copy_map(t_sudo *sudo);
int	_priority_map(t_sudo *sudo);
int	priority_map(t_sudo *sudo);
int	my_resolve(t_sudo *sudo);
int	algo_rec(t_sudo *sudo, t_list *list);
t_list	*add_elem(t_list *list, int i, int j);
t_list	*free_list(t_list *list);

#endif /* !PROTO_H_ */
