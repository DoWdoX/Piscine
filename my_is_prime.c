int	my_is_prime(int nb)
{
  int	i;

  i = 2;
  if (nb <= 1)
    return (0);
  while (nb % i != 0 && i < nb)
    i = i + 1;
  if (i == nb)
    return (1);
  else
    return (0);
}
