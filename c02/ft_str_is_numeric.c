//	Created by aazdoev  //
//----------------------//
//
//0-9 == 48-57

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int i;

	if (!str[0])
	{
		return (1);
	}
	else
	{
		i = 0;
		while (str[i])
		{
			if (str[i] < 48 || str[i] > 57)
				return 0;
			i++;
		}
	} 
	return 1;
}

int main(void)
{
	char str[] = "34df45";
	printf("%d", ft_str_is_numeric(str));
	return (0);
}
