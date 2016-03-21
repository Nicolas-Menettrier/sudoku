/*
** find_zero.c for find_zero in /Users/menett_a/Modules/CprogElem/sudoki-bi
** 
** Made by menett_a
** Login   <menett_a@epitech.eu>
** 
** Started on  Sun Feb 28 21:55:06 2016 menett_a
** Last update Sun Feb 28 21:58:26 2016 menett_a
*/

#include "struct.h"
#include "proto.h"

int	find_zero(t_sudo *sudo)
{
  int	i;
  int	j;

  i = 0;
  while (i < 9)
    {
      j = 0;
      while (j < 9)
	{
	  if (sudo->map[i][j] == 0)
	    {
	      display_x_tab();
	      return (0);
	    }
	  j = j + 1;
	}
      i = i + 1;
    }
  return (1);
}
