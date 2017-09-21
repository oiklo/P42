/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llonger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 17:24:08 by llonger           #+#    #+#             */
/*   Updated: 2017/09/17 23:29:27 by llonger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int a;

	i = 0;
	a = 0;
	while (i < length - 1)
	{
		a = f(tab[i], tab[i + 1]);
		if (a > 0)
			return (0);
		i++;
	}
	return (1);
}
