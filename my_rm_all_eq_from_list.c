#include "mylist.h"

int	my_rm_all_eq_from_list(t_list **begin,
			       void *data_ref, int (*cmp)())
{
  t_list	*tmp;
  t_list	*prec;
  t_list	*suiv;

  tmp = NULL;
  prec = begin;
  suiv = NULL;
  while (prec)
    {
      if ((*cmp)(prec->data, data_ref) == 0)
	{
	  if (prec == begin)
	    begin = prec->next;
	  tmp = prec;
	  prec = prec->next;
	  free(tmp);
	}
      else
	{
	  suiv = prec;
	  prec = prec->next;
	}
    }
}
