#include <stdlib.h>
#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep)
{
	char *str;
	char *str_empty;
	int i;
	int j;
	int k;

	if (size == 0)
		return ("\0");
	while (*strs)
	{
		while (**strs)
		{
			printf("%c", **strs);
		}
		strs++;
		printf("\n");
	}
	return (str_empty);
}

int main(int argc, char **argv)
{
	char *sep = ",";
	printf("%s", ft_strjoin(argc, argv, sep));
}
