/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grillevalide.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpayan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 15:16:27 by mpayan            #+#    #+#             */
/*   Updated: 2017/09/10 21:33:21 by abouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prot.h"

int		grillevalide(char tab[9][9], int position)
{
	int		ligne;
	int		col;
	int		test;

	ligne = position / 9;
	col = position % 9;
	test = 1;
	if (position == 81)
		return (1);
	if (tab[ligne][col] != '.')
		return (grillevalide(tab, position + 1));
	while (test <= 9)
	{
		if (absentligne(ligne, tab, test) &&
				absentcolonne(col, tab, test)
				&& absentbloc(test, tab, ligne, col))
		{
			tab[ligne][col] = test + '0';
			if (grillevalide(tab, position + 1))
				return (1);
		}
		test++;
	}
	tab[ligne][col] = '.';
	return (0);
}
