/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printsudoku.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llonger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 12:02:59 by llonger           #+#    #+#             */
/*   Updated: 2017/09/10 21:33:46 by abouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prot.h"

int		printsudo(char tab[9][9])
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (tab[i][j] == '.')
			{
				ft_putstr("Error\n");
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

void	printfinal(char tab[9][9])
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			ft_putchar(tab[i][j]);
			ft_putchar(' ');
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}
