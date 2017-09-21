/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 10:06:05 by abouquet          #+#    #+#             */
/*   Updated: 2017/09/10 21:31:50 by abouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prot.h"

int		ft_init(char **argv, int ligne, int col)
{
	char	tab[9][9];

	while (ligne < 10)
	{
		col = 0;
		while (col < 9)
		{
			if ((argv[ligne][col] == 46 ||
					(argv[ligne][col] > 48 && argv[ligne][col] < 58))
					&& ft_strlen(argv, ligne) == 1)
				tab[ligne - 1][col] = argv[ligne][col];
			else
			{
				ft_putstr("Error\n");
				return (0);
			}
			col++;
		}
		ligne++;
	}
	if (ft_check(tab, 0, 0) == 1)
		grillevalide(tab, 0);
	if (printsudo(tab) == 0)
		printfinal(tab);
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc != 10)
		ft_putstr("Error\n");
	else
		ft_init(argv, 1, 0);
	return (0);
}
