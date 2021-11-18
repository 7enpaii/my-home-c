/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:19:30 by aazdoev           #+#    #+#             */
/*   Updated: 2021/11/16 14:28:32 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long int ft_strlen(char *src)
{
	long int cnt;
	
	while (src[cnt])
		cnt++;
	return (cnt);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	long int	i;
	long int	destlen;
	
	destlen = ft_strlen(dest);
	i = 0;
	while (src[i] && i < nb)
		dest[destlen++] = src[i++];
	dest[destlen] = '\0';
	return (dest);
}
