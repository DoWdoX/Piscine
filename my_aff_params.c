void	my_aff_params(int ac, char **av)
{
  int	i;

  i = 0;
  while (i < ac)
    {
      my_putstr(av[i]);
      my_putchar('\n');
      i = i + 1;
    }
}
