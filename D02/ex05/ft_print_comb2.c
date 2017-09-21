/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llonger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 14:56:21 by llonger           #+#    #+#             */
/*   Updated: 2017/08/31 14:56:26 by llonger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_testcombf(int a, int b, int y, int z)
{
	if (a == '9' && b == '8' && y == '9' && z == '9')
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(' ');
		ft_putchar(y);
		ft_putchar(z);
	}
	else
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(' ');
		ft_putchar(y);
		ft_putchar(z);
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_testcomb2(int a, int b, int y, int z)
{
	if (a < y)
	{
		ft_testcombf(a, b, y, z);
	}
	else
	{
		if (a == y && b < z)
			ft_testcombf(a, b, y, z);
	}
}

void	ft_printfinal(int a, int b, int y, int z)
{
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (y <= '9')
			{
				while (z <= '9')
				{
					ft_testcomb2(a, b, y, z);
					z++;
				}
				y++;
				z = '0';
			}
			b++;
			y = '0';
		}
		a++;
		b = '0';
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;
	int y;
	int z;

	a = '0';
	b = '0';
	y = '0';
	z = '0';
	ft_printfinal(a, b, y, z);
}
