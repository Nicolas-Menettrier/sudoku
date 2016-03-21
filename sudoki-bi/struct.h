/*
** struct.h for struct in /home/pinta_a/rendu/sudoki-bi
** 
** Made by pinta_a
** Login   <pinta_a@epitech.eu>
** 
** Started on  Sat Feb 27 16:15:56 2016 pinta_a
** Last update Sat Feb 27 22:36:41 2016 pinta_a
*/

#ifndef	STRUCT_H_
# define STRUCT_H_

typedef struct	s_list
{
  struct s_list	*next;
  int		data;
  int		i;
  int		j;
}		t_list;

typedef struct	s_sudo
{
  struct s_list	*list;
  int		map[9][9];
  int		tmp[9][9];
  int		nb;
}		t_sudo;

typedef struct	s_pars
{
  int		i;
  int		j;
  int		x;
  int		y;
}		t_pars;

#endif /* !STRUCT_H_ */
