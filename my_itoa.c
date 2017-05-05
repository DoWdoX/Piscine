/*
** my_itoa.c for my_itoa in /home/DoWdoX/all_C
** 
** Made by DORIAN DEBOUT
** Login   <DoWdoX@epitech.net>
** 
** Started on  Wed Mar 15 22:06:37 2017 DORIAN DEBOUT
** Last update Wed Mar 15 22:11:01 2017 DORIAN DEBOUT
*/

int	my_int_len(int nb)
{
  int	div;
  int	count;

  div = 1;
  count = 1;
  while (nb / div >= 1)
    {
      div = div * 10;
      count = count + 1;
    }
  return (count);
}

char	*my_itoa(int nb)
{
  int	div;
  char	*str;
  int	i;

  i = my_int_len(nb);
  if ((str = malloc(sizeof(char) * i)) == NULL)
    return (NULL);
  i = i - 1;
  div = 10;
  str[i] = '\0';
  while (i > 0)
    {
      str[i - 1] = (nb % div) + 48;
      nb = nb / 10;
      i = i - 1;
    }
  return (str);
}
