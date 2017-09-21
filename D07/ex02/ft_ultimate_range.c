/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llonger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 16:56:44 by llonger           #+#    #+#             */
/*   Updated: 2017/09/11 16:56:46 by llonger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		len;
	int		*tab;
	int		j;

	i = 0;
	j = max - min;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	tab = (int*)malloc(sizeof(*tab) * (max - min));
	len = min;
	while (len < max)
	{
		tab[i] = len;
		i++;
		len++;
	}
	*range = tab;
	return (j);
}
