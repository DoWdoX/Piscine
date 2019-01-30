#include <stdlib.h>

char	*sum_params(int argc, char **argv)
{
  int	i;
  char	*concat;
  int	len;

  len = 0;
  i = 0;
  while (i < argc)
    {
      len = len + my_strlen(argv[i]);
      i = i + 1;
    }
  if (((concat = malloc(sizeof(concat) * (len + 1))) == NULL))
    return (NULL);
  i = 0;
  while (i < argc)
    {
      my_strcat(concat, argv[i]);
      if (i < argc - 1)
	my_strcat(concat, "\n");
      i = i + 1;
    }
  return (concat);
}
