/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudostrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llonger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 14:44:11 by llonger           #+#    #+#             */
/*   Updated: 2017/09/10 21:34:10 by abouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prot.h"

int		ft_strlen(char **argv, int ligne)
{
	int col;

	col = 0;
	while (col <= 9 && argv[ligne][col] != '\0')
	{
		if (col >= 9)
			return (0);
		col++;
	}
	if (col == 9)
		ligne++;
	return (1);
}
