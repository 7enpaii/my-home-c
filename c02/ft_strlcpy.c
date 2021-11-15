#include <stdio.h>

int				ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len++]);
	return (len);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int str_len;
	unsigned int i;

	str_len = ft_strlen(src);
	if (str_len + 1 < size)
	{
		i = -1;
		while (++i < str_len + 1)
			dest[i] = src[i];
	}
	else if (size)
	{
		i = -1;
		while (++i < size - 1)
			dest[i] = src[i];
	}
	dest[i] = '\0';
	return (str_len);
}


int main(void)
{
  char str[] = "hello this is my new algo";
  char dest[5];

  printf("%d\n", ft_strlcpy(dest, str, 3));
  printf("%s\n", dest);
  printf("%s\n", str);
  return (0);
}
