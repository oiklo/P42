/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   absentligne.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpayan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 10:11:28 by mpayan            #+#    #+#             */
/*   Updated: 2017/09/10 12:04:24 by abouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		absentligne(int ligne, char tab[9][9], int test)
{
	int curs;

	curs = 0;
	while (curs < 9)
	{
		if (tab[ligne][curs] == test + '0')
		{
			return (0);
			break ;
		}
		else
		{
			curs++;
		}
	}
	return (1);
}
