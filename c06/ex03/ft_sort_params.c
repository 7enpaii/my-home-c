/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 11:42:40 by aazdoev           #+#    #+#             */
/*   Updated: 2021/11/18 15:23:21 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	print(char c)
{
	write(1, &c, 1);
}

void ft_swap(char **str1, char **str2)
{
	char *copy;

	copy = *str1;
	*str1 = *str2;	
	*str2 = copy;
}

void	ft_sort_arguments_tab_order_ascii(char **args_tab, int size)
{
	int	is_finish;
	char	**begining_state;

	begining_state = args_tab;
	if (size > 1)
	{
		is_finish = 0;
		while (is_finish < size)
		{
			args_tab = begining_state;
			while (*args_tab && *(args_tab + 1))
			{
				if ((int)**args_tab > (int)**(args_tab + 1))
					ft_swap(&*args_tab, &*(args_tab + 1));
				args_tab++;
			}
			is_finish++;
		}			
	}
}

int	main(int argc, char **argv)
{
	ft_sort_arguments_tab_order_ascii(&*(argv + 1), argc);
	int i;
	int j;

	i = 0;
	while (argv[++i])
	{
		j = 0;
		while (argv[i][j])
			print(argv[i][j++]);
		print('\n');
	}
}


