/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkmultiple.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llonger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 18:41:24 by llonger           #+#    #+#             */
/*   Updated: 2017/09/10 13:37:23 by abouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		checkmultiple(char tab[9][9])
{
	int a;
	int b;
	int c;

	a = 0;
	b = 0;
	c = 0;
	while (a < 9)
	{
		while (b < 9)
		{
			if (tab[a][b] != '.')
				c++;
			b++;
		}
		b = 0;
		a++;
	}
	if (c < 17)
		return (0);
	return (1);
}
