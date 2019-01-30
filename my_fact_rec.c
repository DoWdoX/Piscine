int	my_fact_rec(int nb)
{
  if (nb == 0 || nb == 1)
    return (1);
  if (nb < 0 || nb >= 13)
    return (0);
  else
    nb = nb * my_fact_rec(nb - 1);
  return (nb);
}
