/*
** main.c for pute in /home/pinta_a/rendu/sudoki-bi
** 
** Made by arnaud pinta
** Login   <pinta_a@epitech.net>
** 
** Started on  Fri Feb 26 21:44:59 2016 arnaud pinta
** Last update Sun Feb 28 20:33:18 2016 menett_a
*/

#include <stdlib.h>
#include <unistd.h>
#include "struct.h"
#include "proto.h"

int		main(void)
{
  t_sudo	sudo;
  char		map[11][21];
  int		error;
  int		nb;

  nb = 0;
  sudo.list = NULL;
  while ((error = check_error(map)) == 1)
    {
      stock_map(&sudo, map);
      if (nb > 0)
	write(1, "####################\n", 21);
      my_resolve(&sudo);
      sudo.list = free_list(sudo.list);
      nb = nb + 1;
    }
  if (error == -1)
    {
      if (nb > 0)
	write(1, "####################\n", 21);
      write(2, "MAP ERROR\n", 10);
    }
  return (0);
}
