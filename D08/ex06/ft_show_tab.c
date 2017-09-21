/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llonger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 10:50:34 by llonger           #+#    #+#             */
/*   Updated: 2017/09/16 22:28:55 by llonger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putnbr(int nb)
{
	long nnb;

	nnb = nb;
	if (nnb >= -2147483648 && nnb <= 2147483647)
	{
		if (nnb < 0)
		{
			ft_putchar('-');
			nnb = -nnb;
		}
		if (nnb >= 10)
		{
			ft_putnbr(nnb / 10);
			ft_putnbr(nnb % 10);
		}
		else
		{
			ft_putchar(nnb + '0');
		}
	}
}

void	ft_putstr(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		ft_putchar(str[a]);
		a++;
	}
}

void	ft_print_words_tables(char **tab)
{
	int		a;

	a = 0;
	while (tab[a])
	{
		ft_putstr(tab[a]);
		ft_putchar('\n');
		a++;
	}
}

void	ft_show_tab(struct s_stock_par *par)
{
	int i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		ft_putnbr(par[i].size_param);
		ft_putchar('\n');
		ft_print_words_tables(par[i].tab);
		i++;
	}
}
