/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 11:43:12 by aazdoev           #+#    #+#             */
/*   Updated: 2021/11/16 11:39:34 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_to_upcase(char *str)
{
	if (*str >= 'a' && *str <= 'z')
		*str -= 32;
}

void	ft_to_lowcase(char *str)
{
	if (*str >= 'A' && *str <= 'Z')
		*str += 32;
}

int	not_alphanumeric(char *str)
{
	if ((*str > 0 && *str < '0') || (*str > '9' && *str < 'A'))
		return (1);
	else if ((*str > 'Z' && *str < 'a') || (*str > 'z' && *str <= 124))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (i == 0)
			ft_to_upcase(&str[i]);
		else if (not_alphanumeric(&str[i]) == 1)
		{
			while (not_alphanumeric(&str[i]) == 1)
				++i;
			ft_to_upcase(&str[i]);
		}
		else
			ft_to_lowcase(&str[i]);
	}
	return (str);
}
