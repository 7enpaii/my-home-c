/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:11:30 by aazdoev           #+#    #+#             */
/*   Updated: 2021/11/18 17:12:59 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt++]);
	return (cnt);
}

char	*ft_strdup(char *str)
{
	char	*dest;
	int		strlen;
	int		i;

	strlen = ft_strlen(str) + 1;
	dest = malloc(sizeof(*dest) * strlen);
	i = 0;
	if (!dest)
		return (NULL);
	while (*str)
		dest[i++] = *str++;
	dest[i] = '\0';
	free(dest);
	return (dest);
}
