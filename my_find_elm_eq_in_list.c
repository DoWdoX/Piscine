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
