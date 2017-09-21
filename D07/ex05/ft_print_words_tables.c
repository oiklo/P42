/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llonger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 11:52:26 by llonger           #+#    #+#             */
/*   Updated: 2017/09/13 11:52:26 by llonger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
