/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:29:59 by aazdoev           #+#    #+#             */
/*   Updated: 2021/11/16 14:50:07 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	compare_chars(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
	}
	return (*s2 == '\0');
}

char *ft_strstr(char *str, char *to_find)
{
	while (*str != '\0')
	{
		if ((*str == *to_find) && compare_chars(str, to_find))
			return str;
		str++;
	}	
	return ("(null)");
}

