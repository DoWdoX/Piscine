#include <stdlib.h>

char	*my_strdup(char *src)
{
  char	*cpy;
  int	len;

  len = my_strlen(src);
  cpy = (char*)malloc(sizeof(*src) * (len + 1));
  my_strcpy(cpy, src);
  return (cpy);
}
