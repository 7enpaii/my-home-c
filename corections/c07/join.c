#include <stdio.h>
#include <stdlib.h>

long int	get_strs_len(char **strs)
{
	int len;
	len = 0;
	
	while (*strs)
	{
		while (**strs)
			len++;
		*strs++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*joined_str;
	int i;
	int j;
	int index;

	i = 0;
	index = 0;
	str_len = size * sep; 
	joined_str = malloc(sizeof(char) * str_len);
	while (strs[i])
	{
		j = 0;
		while (strs[i][j])
			joined_str[index++] = strs[i][j++];
		j = 0;
		while (sep[j])
			joined_str[index++] = sep[j++];
		i++;
	}
	return (joined_str);
}

int main(void)
{
	char *strs[20] = {
		"if i will make ",
		"my life good",
		"i can make life of other people",
		"good. Like my life",
		"My number is 324\t",
	};
	char *sep = ",";
	char *joined = ft_strjoin(4, strs, sep); 
	printf("str: \n%s", joined);
}
