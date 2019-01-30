int	my_getsize(char *str)
{
  int	j;

  j = 0;
  while (str[j])
    j = j + 1;
  return (j);
}

int	my_putnbr_base(int nbr, char *base)
{
  unsigned int	i;

  i = my_getsize(base);
  if (nbr < 0)
    {
      my_putchar('-');
      nbr = -nbr;
    }
  if (nbr >= i)
    {
      my_putnbr_base(nbr / i, base);
      my_putnbr_base(nbr % i, base);
    }
  else
    my_putchar(base[nbr]);
}
