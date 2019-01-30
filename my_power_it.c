int	my_power_it(int nb, int p)
{
  int	result;

  result = 1;
  if (p < 0)
    return (0);
  if (p == 0)
    return (1);
  while (p > 0)
    {
      result = result * nb;
      p = p - 1;
    }
  return (result);
}
