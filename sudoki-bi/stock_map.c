/*
** stock_map.c for read map in /Users/menett_a/Modules/CprogElem/sudoki-bi       
** 
** Made by menett_a
** Login   <menett_a@epitech.eu>
** 
** Started on  Fri Feb 26 21:55:33 2016 menett_a
** Last update Sun Feb 28 19:03:19 2016 menett_a
*/

#include <unistd.h>
#include "struct.h"
#include "proto.h"

void		stock_map(t_sudo *sudo, char map[11][21])
{
  t_pars	pars;

  pars.y = 0;
  pars.i = 1;
  while (pars.i < 10)
    {
      pars.x = 0;
      pars.j = 2;
      while (pars.j < 19)
	{
	  if (pars.j % 2 == 0)
	    {
	      sudo->map[pars.y][pars.x] = map[pars.i][pars.j] - 48;
	      if (map[pars.i][pars.j] == ' ')
		sudo->map[pars.y][pars.x] = map[pars.i][pars.j] - 32;
	      pars.x = pars.x + 1;
	    }
	  pars.j = pars.j + 1;
	}
      pars.y = pars.y + 1;
      pars.i = pars.i + 1;
    }
}
