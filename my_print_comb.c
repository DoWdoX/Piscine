void	my_putchar(char c);

int	print_putchar(int i, int j, int k)
{
  my_putchar(i);
  my_putchar(j);
  my_putchar(k);
  return (0);
}

int	quote_spaces1(int a, int b)
{
  my_putchar(a);
  my_putchar(b);
  return (0);
}

int	my_print_comb()
{
  int	i;
  int	j;
  int	k;

  i = '0';
  while (i <= '7')
    {
      j = i + 1;
      while (j <= '8')
	{
	  k = j + 1;
	  while (k <= '9')
	    {
	      print_putchar(i, j, k);
	      if (i != '7')
		quote_spaces1(',', ' ');
	      k = k + 1;
	    }
	  j = j + 1;
	}
      i = i + 1;
    }
  return (0);
}
