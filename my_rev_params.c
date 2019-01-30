void	my_rev_params(int ac, char **av)
{
  ac = ac - 1;
  while (ac >= 0)
    {
      my_putstr(av[ac]);
      my_putchar('\n');
      ac = ac - 1;
    }
}
