/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkerror.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llonger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 12:40:24 by llonger           #+#    #+#             */
/*   Updated: 2017/09/10 21:32:17 by abouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prot.h"

int		checkligne(int ligne, int col, char tab[9][9], char test)
{
	int curs;

	curs = 0;
	while (curs < 9)
	{
		if (tab[ligne][curs] == test && curs != col)
		{
			return (0);
			break ;
		}
		else
			curs++;
	}
	return (1);
}

int		checkcol(int ligne, int col, char tab[9][9], char test)
{
	int curs;

	curs = 0;
	while (curs < 9)
	{
		if (tab[curs][col] == test && curs != ligne)
		{
			return (0);
			break ;
		}
		else
			curs++;
	}
	return (1);
}

int		checkblock(int ligne, int col, char tab[9][9], char test)
{
	int		lignetest;
	int		coltest;
	int		minl;
	int		minc;

	coltest = col;
	lignetest = ligne;
	minl = ligne - (ligne % 3);
	minc = col - (col % 3);
	ligne = minl;
	col = minc;
	while ((ligne >= minl) && (ligne <= (minl + 2)))
	{
		col = 0;
		while ((col >= minc) && (col <= (minc + 2)))
		{
			if (tab[ligne][col] == test &&
				(ligne != lignetest && col != coltest))
				return (0);
			col++;
		}
		ligne++;
	}
	return (1);
}

int		checkmult(int ligne, int col, char tab[9][9], char test)
{
	int		a;
	int		b;
	int		c;
	int		d;

	d = checkmultiple(tab);
	if (d == 0)
		return (0);
	else
	{
		a = checkligne(ligne, col, tab, test);
		b = checkcol(ligne, col, tab, test);
		c = checkblock(ligne, col, tab, test);
		if (a == 0 || b == 0 || c == 0)
			return (0);
	}
	return (1);
}

int		ft_check(char tab[9][9], int ligne, int col)
{
	int		a;

	while (ligne < 9 && col < 9)
	{
		if (tab[ligne][col] != '.')
		{
			a = checkmult(ligne, col, tab, tab[ligne][col]);
			if (a == 0)
			{
				return (0);
			}
		}
		if (col == 8 && ligne < 9)
		{
			col = 0;
			ligne++;
		}
		else if (col < 8)
			col++;
		if (col == 8 && ligne == 8)
			return (1);
	}
	return (0);
}
