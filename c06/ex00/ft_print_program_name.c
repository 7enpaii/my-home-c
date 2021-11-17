#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}


int main(int argc, char **argv)
{
	int i;
	
	i = 0;
	while (argv[0][i])
		print(argv[0][i++]);
}
