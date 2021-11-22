#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char nbr)
{
	return (10 - (58 - (int)nbr));
}

int *get_correct_argv(char* argv)
{
	int	*args_tab;
	int i, j;	

	i = 0;
	j = 0;
	args_tab = malloc(sizeof(*args_tab) * 16);

	while (argv[i])
	{
		if(argv[i] == ' ')
			i++;
		if (*argv >= '0' && *argv <= '9')
		{
			args_tab[j] = ft_atoi(argv[i]);
			j++;
		}
		i++;
	}
	return (args_tab);
}

int len(int *tab)
{
	int cnt = 0;
	for (cnt; tab[cnt]; cnt++);
	return (cnt);
}

int main(int argc, char** argv)
{
	int	*arguments = get_correct_argv(argv[1]);
	//char nb = '8';
	//printf("%d", 10 - (58-(int)nb));

	printf("len == %d\n", len(arguments));
	for (int j = 0; j < 16; j++)
		printf("%d\n", arguments[j]);

}
