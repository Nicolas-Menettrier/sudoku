/*
** free_list.c for free_list in /Users/menett_a/Modules/CprogElem/sudoki-bi
** 
** Made by menett_a
** Login   <menett_a@epitech.eu>
** 
** Started on  Sun Feb 28 18:37:54 2016 menett_a
** Last update Sun Feb 28 19:00:38 2016 menett_a
*/

#include <stdlib.h>
#include "proto.h"

t_list		*free_list(t_list *list)
{
  t_list	*tmp;
  t_list	*_tmp;
  
  tmp = list;
  while (tmp != NULL)
    {
      _tmp = tmp->next;
      free(tmp);
      tmp = _tmp;
    }
  return (NULL);
}
