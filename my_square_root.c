int	my_square_root(int nb)
{
  int	i;

  i = 0;
  while (i * i < nb)
    i = i + 1;
  if (i * i == nb)
    return (i);
  else
    return (0);

}
