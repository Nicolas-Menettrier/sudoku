/*
** test.c for test in /Users/menett_a/Modules/CprogElem/sudoki-bi
** 
** Made by menett_a
** Login   <menett_a@epitech.eu>
** 
** Started on  Sat Feb 27 16:39:40 2016 menett_a
** Last update Sun Feb 28 19:07:26 2016 menett_a
*/

#include <unistd.h>
#include "proto.h"

int	is_first_line(char c, int i)
{
  if (c == '|' && i == 1)
    return (0);
  if (c == '-' && i == 2)
    return (0);
  if (c == '\n' && i == 3)
    return (0);
  return (-1);
}

int	is_mid_line(char c)
{
  if ((c > '0' && c <= '9') || c == ' ')
    return (0);
  return (-1);
}

int	test_first_line(char buffer[21], char map[11][21], int *j, ssize_t s)
{
  int	i;

  i = 0;
  if (s == 0)
    return (0);
  my_copy_buffer(map, buffer, *j);
  if (is_first_line(buffer[i], 1) == -1)
    return (-1);
  i = i + 1;
  while (i < 19)
    {
      if (is_first_line(buffer[i], 2) == -1)
	return (-1);
      i = i + 1;
    }
  if (is_first_line(buffer[i], 1) == -1)
    return (-1);
  i = i + 1;
  if (is_first_line(buffer[i], 3) == -1)
    return (-1);
  *j = *j + 1;
  return (0);
}

int	test_mid_line(char buffer[21], char map[11][21], int *j)
{
  int	i;

  i = 0;
  my_copy_buffer(map, buffer, *j);
  if (is_first_line(buffer[i], 1) == -1)
    return (-1);
  i = i + 1;
  while (i < 19)
    {
      if (is_mid_line(buffer[i]) == -1)
	return (-1);
      i = i + 1;
    }
  if (is_first_line(buffer[i], 1) == -1)
    return (-1);
  i = i + 1;
  if (is_first_line(buffer[i], 3) == -1)
    return (-1);
  *j = *j + 1;
  return (0);
}

int		check_error(char map[11][21])
{
  int		j;
  char		buffer[21];
  ssize_t	size;

  j = 0;
  if ((size = read(0, buffer, 21)) < 0
      || test_first_line(buffer, map, &j, size) == -1)
    return (-1);
  if (size == 0)
    return (0);
  while (j < 10)
    {
      if (read(0, buffer, 21) < 0
	  || test_mid_line(buffer, map, &j) == -1)
	return (-1);
    }
  if (read(0, buffer, 21) < 0
      || test_first_line(buffer, map, &j, size) == -1)
    return (-1);
  return (1);
}
