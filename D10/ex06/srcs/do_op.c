/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llonger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 17:45:45 by llonger           #+#    #+#             */
/*   Updated: 2017/09/17 15:59:15 by llonger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		convertnb(char *nb1)
{
	int	nb;

	nb1 = checknb1(nb1);
	nb = ft_atoi(nb1);
	return (nb);
}

int		ft_checksol(char *sign, int nb2)
{
	if (sign[0] == '/' && nb2 == 0)
	{
		ft_putstr("Stop : division by zero");
		return (0);
	}
	else if (sign[0] == 37 && nb2 == 0)
	{
		ft_putstr("Stop : modulo by zero");
		return (0);
	}
	if (sign[1] != '\0')
	{
		ft_putchar('0');
		return (0);
	}
	return (1);
}

int		ft_doop(char *av1, char *av2, char *av3)
{
	int		nb1;
	int		nb2;
	char	sign;

	nb1 = convertnb(av1);
	nb2 = convertnb(av3);
	if ((ft_checksol(av2, nb2)) != 1)
		return (0);
	sign = av2[0];
	if (sign == '+')
		ft_putnbr((nb1 + nb2));
	else if (sign == '-')
		ft_putnbr((nb1 - nb2));
	else if (sign == '/')
		ft_putnbr(nb1 / nb2);
	else if (sign == 42)
		ft_putnbr(nb1 * nb2);
	else if (sign == 37)
		ft_putnbr(nb1 % nb2);
	else
		ft_putnbr(0);
	return (0);
}
