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
