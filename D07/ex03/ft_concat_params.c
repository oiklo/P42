/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llonger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 17:52:01 by llonger           #+#    #+#             */
/*   Updated: 2017/09/12 17:52:02 by llonger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int a;
	int modlong;

	a = 0;
	modlong = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[modlong] != '\0')
	{
		dest[a + modlong] = src[modlong];
		modlong++;
	}
	dest[a + modlong] = '\n';
	dest[a + modlong + 1] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		a;
	char	*tab;

	i = 1;
	tab = (char*)malloc(sizeof(tab) * (argc));
	while (i < argc)
	{
		tab = ft_strcat(tab, argv[i]);
		i++;
	}
	a = 0;
	while (tab[a] != '\0')
		a++;
	tab[a - 1] = '\0';
	return (tab);
}
