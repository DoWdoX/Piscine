#include "do_op.h"

int	my_error(char opp, int b)
{
  if (b == 0)
    {
      if (opp == '/')
	{
	  my_putstr("Stop : division by zero\n");
	  return (1);
	}
      if (opp == '%')
	{
	  my_putstr("Stop : modulo by zero\n");
	  return (1);
	}
    }
  return (0);
}

int	main(int ac, char **av)
{
  int	i;
  char	*op;

  op = "+-*/%\0";
  if (ac != 4)
    return (0);
  if (my_error(av[2][0], my_getnbr(av[3])))
    return (0);
  i = 0;
  while (op[i])
    {
      if (op[i] == av[2][0])
	{
	  my_put_nbr(opperator[i](my_getnbr(av[1]), my_getnbr(av[3])));
	  my_putchar('\n');
	  return (0);
	}
      i = i + 1;
    }
  my_putchar('0');
  my_putchar('\n');
  return (0);
}
