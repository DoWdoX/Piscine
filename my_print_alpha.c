void	my_putchar(char c);

int	my_print_alpha()
{
  char	i;

  i = 'a';
  while (i <= 'z')
    {
      my_putchar(i);
      i = i + 1;
    }
  return (0);
}
