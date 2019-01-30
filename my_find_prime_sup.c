int	my_find_prime_sup(int nb)
{
  int	i;

  i = 2;
  if (nb <= 2)
    return (2);
  while (i != nb)
    {
      i = 2;
      while (nb % i != 0 && i < nb)
	i = i + 1;
      if (i != nb)
	nb = nb + 1;
    }
  return (nb);
}
