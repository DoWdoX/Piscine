void	my_putchar(char c);

int	my_print_digits()
{
  char	i;

  i = '0';
  while (i <= '9')
    {
      my_putchar(i);
      i = i + 1;
    }
  return (0);
}
