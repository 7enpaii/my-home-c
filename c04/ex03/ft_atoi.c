/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 13:54:21 by aazdoev           #+#    #+#             */
/*   Updated: 2021/11/17 15:43:52 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	compare_symbols(char *str, char *sym)
{
	if (*sym == '-' && *str == '-')
		*sym = '+';
	else if ((*sym == '+' && *str == '-') || (*sym == '-' && *str == '+'))
		*sym = '-';
	else
		*sym = *str;
}

void	check_conditions(char *str, char *sym, int *num)
{
	while (*str)
	{	
		if (*str == '-' || *str == '+')
		{
			if (*(str + 1) == '+' || *(str + 1) == '-')
				compare_symbols(&*str, &*sym);
			else if (*(str + 1) < '0' || *(str + 1) > '9')
				break ;
			else
				compare_symbols(&*str, &*sym);
		}
		else if (*str >= '0' || *str <= '9')
		{
			*num = (*num * 10) + 10 - (58 - (int)*str);
			if (*(str + 1) < '0' || *(str + 1) > '9')
				break ;
		}
		str++;
	}
}

int	ft_atoi(char *str)
{
	char	sym;
	int		num;

	num = 0;
	while (*str > 0 && *str < '!')
	{
		str++;
		if (*str == '-' && *str == '+')
			break ;
		else if (*str >= '0' && *str <= '9')
			break ;
	}
	if (*str == '-' || *str == '+' || (*str >= '0' && *str <= '9'))
		check_conditions(&*str, &sym, &num);
	if (sym == '-')
		return (-num);
	return (num);
}
