/*
** list.c for list in /home/pinta_a/rendu/sudoki-bi
** 
** Made by pinta_a
** Login   <pinta_a@epitech.eu>
** 
** Started on  Sat Feb 27 18:57:40 2016 pinta_a
** Last update Sat Feb 27 20:11:04 2016 pinta_a
*/

#include <stdlib.h>
#include "struct.h"
#include "proto.h"

t_list		*add_elem(t_list *list, int i, int j)
{
  t_list	*new;
  t_list	*tmp;

  if ((new = malloc(sizeof(t_list))) == NULL)
    return (NULL);
  new->i = i;
  new->j = j;
  new->next = NULL;
  if (list == NULL)
    return (new);
  tmp = list;
  while (tmp->next != NULL)
    tmp = tmp->next;
  tmp->next = new;
  return (list);
}
