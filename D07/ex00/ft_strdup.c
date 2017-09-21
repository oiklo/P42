/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llonger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 14:08:00 by llonger           #+#    #+#             */
/*   Updated: 2017/09/14 11:53:33 by llonger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		len;
	int		a;

	len = ft_strlen(src);
	dest = 0;
	a = 0;
	if ((dest = (char*)malloc(sizeof(*dest) * len)) == NULL)
		return (NULL);
	while (a < len)
	{
		dest[a] = src[a];
		a++;
	}
	dest[len] = '\0';
	return (dest);
}
