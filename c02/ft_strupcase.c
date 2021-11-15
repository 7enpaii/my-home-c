//	Created by aazdoev  //
//----------------------//
//
//0-9 == 48-57

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		i++;
	}
	return (str);
}

int main(void)
{
	char str[] = "sGjfd45*&$%(@_)2KGDIdf";
	printf("%s", ft_strupcase(str));
	//printf("%c", 'j' - 32);
}
