#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}


int main(int argc, char **argv)
{
	int i;
	int j;
	
	while (argv[--argc] != 0)
	{
		j = 0;
		while(argv[argc][j])
			print(argv[argc][j++]);
		print('\n');
	}
}
