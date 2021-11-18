/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 13:46:01 by aazdoev           #+#    #+#             */
/*   Updated: 2021/11/16 17:35:51 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long int	ft_strlen(char *str)
{
	long int	cnt;
	cnt = 0;
	while(str[cnt])
		cnt++;
	return (cnt);
}

char	*ft_strcat(char	*dest, char	*src)
{
	long int	i;
	long int destlen;
	
	destlen = ft_strlen(dest);
	i = 0;
	while (src[i])
		dest[destlen++] = src[i++];
	dest[destlen] = '\0';
	return (dest);
}
