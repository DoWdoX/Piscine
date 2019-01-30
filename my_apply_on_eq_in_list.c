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
