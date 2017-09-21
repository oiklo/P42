/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llonger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 15:47:18 by llonger           #+#    #+#             */
/*   Updated: 2017/09/06 17:09:13 by llonger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	dest[a + modlong] = '\0';
	return (dest);
}
