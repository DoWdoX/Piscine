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
