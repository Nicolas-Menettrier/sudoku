/*
** resolve.c for resolve in /home/pinta_a/rendu/sudoki-bi
** 
** Made by pinta_a
** Login   <pinta_a@epitech.eu>
** 
** Started on  Fri Feb 26 23:01:53 2016 pinta_a
** Last update Sun Feb 28 21:58:24 2016 menett_a
*/

#include <stdlib.h>
#include <unistd.h>
#include "struct.h"
#include "proto.h"

void	init_tab(int tab[9])
{
  int	i;

  i = 0;
  while (i < 9)
    {
      tab[i] = 0;
      i = i + 1;
    }
}

int	nb_error(t_sudo *sudo, int i, int j)
{
  int	tab[9];

  init_tab(tab);
  check_map(sudo->map, tab, i, j);
  check_square(sudo->map, tab, i, j);
  if ((sudo->tmp[i][j] = check_tab(tab)) == 0)
    {
      display_x_tab();
      return (1);
    }
  return (0);
}

int	copy_map(t_sudo *sudo)
{
  int	i;
  int	j;

  i = 0;
  while (i < 9)
    {
      j = 0;
      while (j < 9)
	{
	  if (sudo->map[i][j] > 0)
	    sudo->tmp[i][j] = 0;
	  else if (nb_error(sudo, i, j))
	    return (1);
	  j = j + 1;
	}
      i = i + 1;
    }
  return (0);
}

int	algo_rec(t_sudo *sudo, t_list *list)
{
  int	nb;

  nb = 1;
  if (list != NULL)
    {
      while (nb <= 9)
	{
	  if (is_good(sudo->map, list, nb))
	    {
	      sudo->map[list->i][list->j] = nb;
	      if (list->next == NULL)
		return (1);
	      if (algo_rec(sudo, list->next))
		return (1);
	    }
	  nb = nb + 1;
	}
      sudo->map[list->i][list->j] = 0;
    }
  return (0);
}

int		my_resolve(t_sudo *sudo)
{
  t_list	*list;

  list = NULL;
  if (copy_map(sudo))
    return (1);
  if (priority_map(sudo))
    return (2);
  list = sudo->list;
  algo_rec(sudo, list);
  if (find_zero(sudo) == 0)
    return (0);
  display_map(sudo->map);
  return (0);
}
