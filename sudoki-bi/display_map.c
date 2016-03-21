/*
** display_map.c for display_map in /home/pinta_a/rendu/sudoki-bi
** 
** Made by pinta_a
** Login   <pinta_a@epitech.eu>
** 
** Started on  Fri Feb 26 23:56:43 2016 pinta_a
** Last update Sat Feb 27 19:37:39 2016 pinta_a
*/

#include <unistd.h>
#include "proto.h"

#include <stdio.h>

void	my_putchar(int c)
{
  write(1, &c, 1);
}

void	display_map(int map[9][9])
{
  int	i;
  int	j;

  write(1, "|------------------|\n", 21);
  i = 0;
  while (i < 9)
    {
      write(1, "|", 1);
      j = 0;
      while (j < 9)
	{
	  write(1, " ", 1);
	  my_putchar(map[i][j] + 48);
	  j = j + 1;
	}
      i = i + 1;
      write(1, "|\n", 2);
    }
  write(1, "|------------------|\n", 21);
}

void	display_x_tab()
{
  int	i;
  int	j;

  write(1, "|------------------|\n", 21);
  i = 0;
  while (i < 9)
    {
      write(1, "|", 1);
      j = 0;
      while (j < 9)
	{
	  write(1, " X", 2);
	  j = j + 1;
	}
      i = i + 1;
      write(1, "|\n", 2);
    }
  write(1, "|------------------|\n", 21);
}
