/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prot.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 21:25:38 by abouquet          #+#    #+#             */
/*   Updated: 2017/09/10 21:35:54 by abouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef PROT_H
#	define PROT_H

void	ft_putstr(char *str);
void	ft_putchar(char c);
int		ft_check(char argc[9][9], int ligne, int col);
int		absentligne(int ligne, char tab[9][9], int test);
int		absentcolonne(int col, char tab[9][9], int test);
int		absentbloc(int test, char tab[9][9], int ligne, int col);
int		grillevalide(char tab[9][9], int position);
int		printsudo(char tab[9][9]);
void	printfinal(char tab[9][9]);
int		ft_strlen(char **argv, int ligne);
int		checkmultiple(char tab[9][9]);

#	endif
