/*
** my_fact_it.c for my_fact_it in /home/clement/Piscine
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Fri Oct  7 09:25:50 2016 clement girard
** Last update Mon Oct 10 09:57:54 2016 clement girard
*/

int	my_fact_it(int nb)
{
  int	nb2;

  nb2 = nb - 1;
  if (nb == 0)
    return (1);
  if (nb < 0 || nb >= 13)
    return (0);
  if (nb > 0)
    {
      while (nb2 > 0)
	{
	  nb = nb * nb2;
	  nb2 = nb2 - 1;
	}
      return (nb);
    }
  else
    return (0);
}
