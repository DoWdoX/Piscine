int	my_swap(int *a, int *b)
{
  int	i;

  i = *a;
  *a = *b;
  *b = i;
  return (0);
}
