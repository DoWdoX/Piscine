/*
** my_apply_on_list.c for my_apply_on_list in /home/clement/Piscine/CPool_Day11/task04
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Mon Oct 17 20:27:19 2016 clement girard
** Last update Mon Oct 17 20:30:50 2016 clement girard
*/

#include "mylist.h"

int	my_apply_on_list(t_list *begin, int (*f)(void*))
{
  t_list	*ptr;

  ptr = begin;
  while (ptr)
    {
      (*f)(ptr->data);
      ptr = ptr->next;
    }
}
