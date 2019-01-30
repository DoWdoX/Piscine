void	my_sort_int_tab(int *tab, int size)
{
  int	a;
  int	b;
  int	ptr;

  a = 1;
  while (a < size)
    {
      b = a;
      while (b > 0)
	{
	  if (tab[b] < tab[b - 1])
	    {
	      ptr = tab[b];
	      tab[b] = tab[b - 1];
	      tab[b - 1] = ptr;
	    }
	  b = b - 1;
	}
      a = a + 1;
    }
}
