/*
** my_apply_on_eq_in_list.c for my_apply_on_eq_int_list in /home/clement/Piscine/CPool_Day11/task05
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Tue Oct 18 08:57:50 2016 clement girard
** Last update Tue Oct 18 18:03:14 2016 clement girard
*/

#include "mylist.h"

int	my_apply_on_eq_in_list(t_list *begin, int (*f) (),
			       void *data_ref, int (*cmp) ())
{
  t_list	*list;

  list = begin;
  while (list)
    {
      if ((*cmp)(list->data, data_ref) == 0)
	(*f)(list->data);
      list = list->next;
    }
}
