#include "mylist.h"

int	my_add_list_to_list(t_list **begin1, t_list *begin2)
{
  t_list	*list;

  list = begin1;
  while (list)
      list = list->next;
  list->next = begin2;
}
