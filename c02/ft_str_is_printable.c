//	Created by aazdoev  //
//----------------------//
//
//0-9 == 48-57

#include <stdio.h>

int ft_str_is_printable(char *str)
{
	int i;

	if (str[0] == 0)
	{
		return (1);
	}
	else
	{
		i = 0;
		while (str[i])
		{
			if (str[i] > 32 && str[i] < 127)	
			//if (32 < str[i] > 127)	
				return (1);
			i++;
		}
	}
	//return (1);
}

int main(void)
{
	char str[] = "sdf\n";
	printf("%d", '\t');
	printf("%d", ft_str_is_printable(str));
}
