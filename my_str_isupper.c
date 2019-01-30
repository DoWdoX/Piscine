int	my_str_isupper(char *str)
{
  int	i;
  int	result;

  i = 0;
  result = 1;
  while (str[i] != '\0')
    {
      if (str[i] >= 'A' && str[i] <= 'Z')
	i = i + 1;
      else
	{
	  result = 0;
	  i = i + 1;
	}
    }
  return (result);
}
