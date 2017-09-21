/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llonger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 16:18:40 by llonger           #+#    #+#             */
/*   Updated: 2017/09/17 17:01:42 by llonger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int i;
	int a;

	i = 0;
	a = 0;
	while (tab[i])
	{
		a = f(tab[i]);
		if (a == 1)
			return (a);
		i++;
	}
	return (0);
}