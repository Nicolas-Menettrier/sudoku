/*
** check.c for check in /home/pinta_a/rendu/sudoki-bi
** 
** Made by pinta_a
** Login   <pinta_a@epitech.eu>
** 
** Started on  Sat Feb 27 16:35:31 2016 pinta_a
** Last update Sat Feb 27 22:10:52 2016 pinta_a
*/

#include "proto.h"

void	check_map(int map[9][9], int tab[9], int i, int j)
{
  int	x;
  int	y;

  x = 0;
  while (x < 9)
    {
      if (map[i][x] > 0)
	tab[map[i][x] - 1] = 1;
      x = x + 1;
    }
  y = 0;
  while (y < 9)
    {
      if (map[y][j] > 0)
	tab[map[y][j] - 1] = 1;
      y = y + 1;
    }
}

void	check_square(int map[9][9], int tab[9], int i, int j)
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
	  if (map[i][j] > 0)
	    tab[map[i][j] - 1] = 1;
	  j = j + 1;
	  x = x + 1;
	}
      j = j - 3;
      i = i + 1;
      y = y + 1;
    }
}

int	check_tab(int tab[9])
{
  int	nb;
  int	i;

  i = 0;
  nb = 0;
  while (i < 9)
    {
      if (tab[i] == 0)
	nb = nb + 1;
      i = i + 1;
    }
  return (nb);
}
