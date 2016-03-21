/*
** copy_buffer.c for copy_buffer in /home/pinta_a/rendu/sudoki-bi
** 
** Made by pinta_a
** Login   <pinta_a@epitech.eu>
** 
** Started on  Sat Feb 27 23:21:53 2016 pinta_a
** Last update Sat Feb 27 23:26:18 2016 pinta_a
*/

#include "proto.h"

void	my_copy_buffer(char map[11][21], char buffer[21], int j)
{
  int	i;

  i = 0;
  while (i < 21)
    {
      map[j][i] = buffer[i];
      i = i + 1;
    }
}
