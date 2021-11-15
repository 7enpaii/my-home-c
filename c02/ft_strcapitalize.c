//	Created by aazdoev  //
//----------------------//
//
//word is a alphanumeric

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	return (str);
}

int main(void)
{
	char str[] = "this, 43is test; comment";
	printf("%s", ft_strupcase(str));
	//printf("%c", 'j' - 32);
}
