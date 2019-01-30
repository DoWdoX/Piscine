int	my_power_rec(int nb, int p)
{
  int	result;

  result = 1;
  if (p < 0)
    return (0);
  if (p == 0)
    return (1);
  p = p - 1;
  result = nb * my_power_rec(nb, p);
  return (result);
}
