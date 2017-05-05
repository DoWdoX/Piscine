/*
** my_rev_list.c for my_rev_list in /home/clement/Piscine/CPool_Day11/task03
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Mon Oct 17 18:03:29 2016 clement girard
** Last update Mon Oct 17 20:21:42 2016 clement girard
*/

#include "mylist.h"

int	my_rev_list(t_list **begin)
{
  t_list	*tmp;
  t_list	*new_start;

  new_start = NULL;
  while (*begin)
    {
      tmp = (*begin)->next;
      (*begin)->next = new_start;
      new_start = *begin;
      *begin = tmp;
    }
  *begin = new_start;
}
