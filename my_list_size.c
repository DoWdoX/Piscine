/*
** my_list_size.c for my_list_size in /home/clement/Piscine/CPool_Day11/task02
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Mon Oct 17 17:46:38 2016 clement girard
** Last update Tue Oct 18 17:54:39 2016 clement girard
*/

#include "mylist.h"

int	my_list_size(t_list *begin)
{
  struct s_list *tmp;
  int		i;

  i = 0;
  tmp = begin;
  if (tmp != NULL)
    {
      i = 1;
      while (tmp->next)
	{
	  tmp = tmp->next;
	  i = i + 1;
	}
    }
  return (i);
}
