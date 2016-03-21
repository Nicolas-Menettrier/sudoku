/*
** good.c for good in /home/pinta_a/rendu/sudoki-bi
** 
** Made by pinta_a
** Login   <pinta_a@epitech.eu>
** 
** Started on  Sat Feb 27 22:17:48 2016 pinta_a
** Last update Sat Feb 27 22:20:13 2016 pinta_a
*/

#include <stdlib.h>
#include "struct.h"
#include "proto.h"

int	good_map(int map[9][9], int i, int j, int nb)
{
  int	x;
  int	y;

  x = 0;
  while (x < 9)
    {
      if (map[i][x] == nb)
	return (0);
      x = x + 1;
    }
  y = 0;
  while (y < 9)
    {
      if (map[y][j] == nb)
	return (0);
      y = y + 1;
    }
  return (1);
}

int	good_square(int map[9][9], int i, int j, int nb)
{
  int	x;
  int	y;

  while (i % 3 != 0)
    i = i - 1;
  while (j % 3 != 0)
    j = j - 1;
  y = 0;
  while (y < 3)
    {
      x = 0;
      while (x < 3)
	{
	  if (map[i][j] == nb)
	    return (0);
	  j = j + 1;
	  x = x + 1;
	}
      j = j - 3;
      i = i + 1;
      y = y + 1;
    }
  return (1);
}

int	is_good(int map[9][9], t_list *list, int nb)
{
  if (good_map(map, list->i, list->j, nb)
      && good_square(map, list->i, list->j, nb))
    return (1);
  return (0);
}
