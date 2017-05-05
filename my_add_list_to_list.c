/*
** my_add_list_to_list.c for my_add_list_to_list in /home/clement/Piscine/CPool_Day11/task09
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Tue Oct 18 11:30:05 2016 clement girard
** Last update Tue Oct 18 11:42:50 2016 clement girard
*/

#include "mylist.h"

int	my_add_list_to_list(t_list **begin1, t_list *begin2)
{
  t_list	*list;

  list = begin1;
  while (list)
      list = list->next;
  list->next = begin2;
}
