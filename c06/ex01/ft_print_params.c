#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}


int main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	while (argv[++i])
	{
		j = 0;
		while(argv[i][j])
			print(argv[i][j++]);
		print('\n');
	}
}
