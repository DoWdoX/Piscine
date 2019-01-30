#include "mylist.h"

int	my_list_size(t_list *begin)
{
  struct s_list *tmp;
  int		i;

  i = 0;
  tmp = begin;
  if (tmp != NULL)
    {
      i = 1;
      while (tmp->next)
	{
	  tmp = tmp->next;
	  i = i + 1;
	}
    }
  return (i);
}
