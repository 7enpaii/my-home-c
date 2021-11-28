#include <stdlib.h>
#include "ft_stock_str.h"
#include <stdio.h>
#include <unistd.h>


int	len(char *str)
{
	int n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int i;
	int j;
	int str_len;
	t_stock_str *objects;

	objects = malloc(sizeof(*objects) * ac);
	if (!objects)
		return(NULL);
	i = -1;
	while (av[++i])
	{
		str_len = len(av[i]);
		objects[i].size = str_len;
		objects[i].str = av[i];
		objects[i].copy = objects[i].str;
	}
	objects[i].size = 0;
	objects[i].str = "0";
	objects[i].copy= objects[i].str;
	return (objects);
}



void	print_str(char *str)
{
	while (*str)
	{
		write(1, &*str, 1);
		str++;
	}
	write(1, "\n", 1);
}


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int n;

	if (nb < 0)
	{
		ft_putchar('-');
		n = -nb;
	}
	else
		n = nb;
	if (n > 9)
	{
		ft_putnbr(n / 10);
		n %= 10;
	}
	ft_putchar(n + '0');
}



void	ft_show_tab(struct s_stock_str *par)
{
	int i;
	
	i = -1;
	while (par)
	{	
		ft_putnbr(par->size);	
		ft_putchar('\n');
		print_str(par->str);	
		print_str(par->copy);	
		par++;
		if (!par)
			break;
	}
}





int main(int argc, char **argv)
{
	t_stock_str *tab = ft_strs_to_tab(argc, argv);
	ft_show_tab(tab);
	//for (int i = 0; i <= argc; i++)
	//{
		//printf("tab.size == %d\n", tab[i].size);
		//printf("tab.str == %s\n", tab[i].str);
		//printf("tab.copy == %s\n\n", tab[i].copy);
	//}


}
