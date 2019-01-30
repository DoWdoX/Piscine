void	my_print_word(char **ptr)
{
  int	i;

  i = 0;
  while (ptr[i])
    {
      my_putstr(ptr[i]);
      my_putchar('\n');
      i = i + 1;
    }
}

int	my_show_tab(struct s_stock_par *par)
{
  int	i;

  i = 0;
  while (par[i].tab && par[i].str)
    {
      my_putstr(par[i].copy);
      my_putchar('\n');
      my_put_nbr(par[i].size_param);
      my_putchar('\n');
      my_print_word(par[i].tab);
      i = i + 1;
    }
}
