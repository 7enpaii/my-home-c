/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 11:40:38 by aazdoev           #+#    #+#             */
/*   Updated: 2021/11/18 11:40:41 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}


int main(int argc, char **argv)
{
	int i;
	
	while (--argc != 0)
	{
		i = 0;
		while (argv[argc][i])
			print(argv[argc][i++]);
		print('\n');
	}
}
