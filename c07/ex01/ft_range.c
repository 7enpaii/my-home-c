/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazdoev <aazdoev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 15:43:27 by aazdoev           #+#    #+#             */
/*   Updated: 2021/11/18 16:45:31 by aazdoev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*digit_tab;

	if (min >= max)
		return (NULL);
	digit_tab = malloc(sizeof(*digit_tab) * (max - min));
	if (!digit_tab)
		return (NULL);
	i = 0;
	while (min < max)
		digit_tab[i++] = min++;
	return (digit_tab);
}
