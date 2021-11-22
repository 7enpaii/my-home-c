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
	int *range;
	int i;

	if (min >= max)
		return (NULL);
	max -= min;
	range = malloc(max * sizeof(int));
	if (!range)
		return (NULL);
	i = -1;
	while (++i < max)
		range[i] = min + i;
	return (t);
}
