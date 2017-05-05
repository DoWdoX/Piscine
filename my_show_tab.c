/*
** my_show_tab.c for my_show_tab in /home/clement/Piscine/CPool_Day09/task04
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Thu Oct 13 17:01:16 2016 clement girard
** Last update Fri Oct 14 22:00:24 2016 clement girard
*/

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
