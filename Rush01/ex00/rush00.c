/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llonger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 11:08:30 by llonger           #+#    #+#             */
/*   Updated: 2017/09/02 11:35:15 by llonger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	print(int bord, int entrebord, int lon)
{
	ft_putchar(bord);
	while (lon > 2)
	{
		ft_putchar(entrebord);
		if (lon == 1)
			ft_putchar('\n');
		lon = lon - 1;
		if (lon == 2)
		{
			ft_putchar(bord);
			ft_putchar('\n');
		}
	}
}

int		rush(int a, int b)
{
	int ligne;

	ligne = b;
	if (a <= 0 || b <= 0)
		return (0);
	while (ligne >= 1)
	{
		if (ligne == b || ligne == 1)
		{
			print('o', '-', a);
		}
		else
		{
			print('|', ' ', a);
		}
		if (a == 1)
		{
			ft_putchar('\n');
		}
		ligne = ligne - 1;
	}
	return (0);
}
