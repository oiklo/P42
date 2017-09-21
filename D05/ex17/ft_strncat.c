/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llonger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 16:22:04 by llonger           #+#    #+#             */
/*   Updated: 2017/09/06 16:22:05 by llonger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int a;
	int lon;

	lon = 0;
	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (lon < nb)
	{
		dest[a + lon] = src[lon];
		lon++;
	}
	dest[a + lon] = '\0';
	return (dest);
}
