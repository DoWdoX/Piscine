int	my_fact_it(int nb)
{
  int	nb2;

  nb2 = nb - 1;
  if (nb == 0)
    return (1);
  if (nb < 0 || nb >= 13)
    return (0);
  if (nb > 0)
    {
      while (nb2 > 0)
	{
	  nb = nb * nb2;
	  nb2 = nb2 - 1;
	}
      return (nb);
    }
  else
    return (0);
}
