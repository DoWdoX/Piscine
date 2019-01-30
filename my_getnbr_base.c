int	my_negative(char str)
{
  int	sign;

  if (str == '-')
    sign = -1;
  else
    sign = 1;
  return (sign);
}

int	my_value(char c, char *base)
{
  int	i;

  i  = 0;
  while (base[i])
    {
      if (c == base[i])
	return (i);
      i = i + 1;
    }
  return (0);
}
int	my_getnbr_base(char *str, char *base)
{
  int	i;
  int	result;
  int	len;
  int	sign;
  int	nb;

  len = my_strlen(base);
  sign = my_negative(str);
  i = 0;
  result = 0;
  while (str[i])
    {
      nb = my_value(str[i], base);
      result = result * len + nb;
      i = i + 1;
    }
  return (result * sign);
}
