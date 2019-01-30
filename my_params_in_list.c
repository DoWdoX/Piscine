#include "mylist.h"

int	my_put_in_list(struct s_list **s_list2, void *data)
{
  struct s_list *element;

  element = malloc(sizeof(*element));
  element->data = data;
  element->next = *s_list2;
  *s_list2 = element;
  return (0);
}

t_list	*my_params_in_list(int ac, char **av)
{
  struct s_list *s_list2;
  int	i;

  s_list2 = NULL;
  i = 0;
  while (av[i])
    {
      my_put_in_list(&s_list2, av[i]);
      i = i + 1;
    }
  return (s_list2);
}
