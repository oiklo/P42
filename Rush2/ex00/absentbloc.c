/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   absentloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpayan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 12:01:50 by mpayan            #+#    #+#             */
/*   Updated: 2017/09/10 21:09:01 by abouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		absentbloc(int test, char tab[9][9], int ligne, int col)
{
	int minl;
	int minc;

	minl = ligne - (ligne % 3);
	minc = col - (col % 3);
	ligne = minl;
	col = minc;
	while ((ligne >= minl) && (ligne <= (minl + 2)))
	{
		col = minc;
		while ((col >= minc) && (col <= (minc + 2)))
		{
			if (tab[ligne][col] == (test + '0'))
			{
				return (0);
			}
			col++;
		}
		ligne++;
	}
	return (1);
}
