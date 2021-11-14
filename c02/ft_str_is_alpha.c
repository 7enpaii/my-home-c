#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int i;
	// A-Z == 65-90	
	// a-z == 97-122

	if (str[0] == '\0') {
		return (1);
	} else {
		i = 0;
		while (str[i]) {
			if (str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122 )
				return (0);
			i++;
		}
	}
	return(1);
}

int main(void)
{
	char str[] = "GhsGfd";
	printf("%d", ft_str_is_alpha(str));

	//while (0 < 1){}
	return (0);
}
