/*
** priority.c for priority in /home/pinta_a/rendu/sudoki-bi
** 
** Made by pinta_a
** Login   <pinta_a@epitech.eu>
** 
** Started on  Sat Feb 27 18:56:56 2016 pinta_a
** Last update Sat Feb 27 20:14:01 2016 pinta_a
*/

#include <stdlib.h>
#include "struct.h"
#include "proto.h"

int	_priority_map(t_sudo *sudo)
{
  int	i;
  int	j;

  i = 0;
  while (i < 9)
    {
      j = 0;
      while (j < 9)
	{
	  if (sudo->tmp[i][j] == sudo->nb
	      && (sudo->list = add_elem(sudo->list, i, j)) == NULL)
		return (1);
	  j = j + 1;
	}
      i = i + 1;
    }
  return (0);
}

int		priority_map(t_sudo *sudo)
{
  sudo->nb = 1;
  while (sudo->nb <= 9)
    {
      if (_priority_map(sudo))
	return (1);
      sudo->nb = sudo->nb + 1;
    }
  return (0);
}
