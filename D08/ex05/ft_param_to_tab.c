/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llonger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 20:28:52 by llonger           #+#    #+#             */
/*   Updated: 2017/09/14 20:28:53 by llonger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>

int					ft_strlen(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}

char				*ft_strdup(char *src)
{
	char	*dest;
	int		len;
	int		a;

	len = ft_strlen(src);
	a = 0;
	if ((dest = (char*)malloc(sizeof(*dest) * len)) == NULL)
		return (NULL);
	while (a < len)
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par		*tab;
	int				i;
	int				a;

	i = 0;
	a = 0;
	if ((tab = (t_stock_par*)malloc(sizeof(*tab) * (ac + 1))) == NULL)
		return (NULL);
	while (i < ac)
	{
		a = 0;
		while (av[i][a])
			a++;
		tab[i].size_param = a;
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		tab[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
