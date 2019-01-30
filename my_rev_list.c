#include "mylist.h"

int	my_rev_list(t_list **begin)
{
  t_list	*tmp;
  t_list	*new_start;

  new_start = NULL;
  while (*begin)
    {
      tmp = (*begin)->next;
      (*begin)->next = new_start;
      new_start = *begin;
      *begin = tmp;
    }
  *begin = new_start;
}
