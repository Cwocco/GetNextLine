#include "../libft/libft.h"
#include <stdlib.h>
#include <unistd.h>

static char *join_str(char *s1, char *s2)
{
  char *str;
  int i;

  str = NULL;
  i = 0;
  if (s1 && s2)
    {
      if (!(str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
	return (NULL);
      ft_strcpy(str, s1);
      ft_strcat(str, s2);
      //     ft_strdel(&s1);
    }
  ft_putstr(str);
  return (str);
}

int main(int argc, char **argv)
{
  int i;

  i = 0;
  if (argc == 3)
    join_str(argv[1],argv[2]);
  write(1, "\n", 1);
  return (0);
}
