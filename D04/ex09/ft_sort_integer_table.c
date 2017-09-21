/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llonger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 15:00:06 by llonger           #+#    #+#             */
/*   Updated: 2017/09/13 15:00:08 by llonger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int i2;
	int temp;

	i = 0;
	while (i < size)
	{
		i2 = 0;
		while (i2 < size)
		{
			if (tab[i] < tab[i2])
			{
				temp = tab[i];
				tab[i] = tab[i2];
				tab[i2] = temp;
			}
			i2++;
		}
		i++;
	}
}
