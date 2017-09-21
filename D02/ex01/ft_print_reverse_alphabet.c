/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llonger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 17:22:18 by llonger           #+#    #+#             */
/*   Updated: 2017/08/31 11:50:37 by llonger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char alinv;

	alinv = 'z';
	while (alinv >= 'a')
	{
		ft_putchar(alinv);
		alinv--;
	}
}
