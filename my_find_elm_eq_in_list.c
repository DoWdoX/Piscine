/*
** my_find_elm_eq_in_list.c for my_find_elm_eq_in_list in /home/clement/Piscine/CPool_Day11/task06
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Tue Oct 18 10:48:11 2016 clement girard
** Last update Tue Oct 18 11:04:52 2016 clement girard
*/

#include "mylist.h"

void	*my_find_elm_eq_in_list(t_list *begin,
				void *data_ref, int (*cmp)())
{
  t_list	*list;

  list = begin;
  while (list)
    {
      if ((*cmp)(list->data, data_ref) == 0)
	return (list->data);
      list = list->next;
    }
  return (list->data);
}
