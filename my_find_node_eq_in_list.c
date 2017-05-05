/*
** my_find_node_eq_in_list.c for my_find_node_eq_in_list in /home/clement/Piscine/CPool_Day11/task07
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Tue Oct 18 10:57:45 2016 clement girard
** Last update Tue Oct 18 18:03:59 2016 clement girard
*/

#include "mylist.h"

t_list	*my_find_node_eq_in_list(t_list *begin,
				 void *data_ref, int (*cmp)())
{
  t_list	*list;

  list = begin;
  while (list)
    {
      if ((*cmp)(list->data, data_ref) == 0)
	return (list);
      list = list->next;
    }
  return (list);
}
