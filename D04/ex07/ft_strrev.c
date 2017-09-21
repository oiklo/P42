/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llonger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 22:18:02 by llonger           #+#    #+#             */
/*   Updated: 2017/09/03 12:49:59 by llonger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		len;
	int		rev;
	char	temp;

	len = 0;
	while (str[len] != '\0')
		len++;
	len = len - 1;
	rev = 0;
	while (rev < len)
	{
		temp = str[rev];
		str[rev] = str[len];
		str[len] = temp;
		rev++;
		len--;
	}
	return (str);
}
