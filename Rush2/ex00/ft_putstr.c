/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 10:19:42 by abouquet          #+#    #+#             */
/*   Updated: 2017/09/10 21:32:57 by abouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prot.h"

void	ft_putstr(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		ft_putchar(c);
		i++;
	}
}
