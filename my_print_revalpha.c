void	my_putchar(char c);

int	my_print_revalpha()
{
  char	i;

  i = 'z';
  while (i >= 'a')
    {
      my_putchar(i);
      i = i - 1;
    }
  return (0);
}
