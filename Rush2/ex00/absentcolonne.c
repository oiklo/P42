/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   absentcolonne.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpayan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 11:52:20 by mpayan            #+#    #+#             */
/*   Updated: 2017/09/10 12:04:13 by abouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		absentcolonne(int col, char tab[9][9], int test)
{
	int curs;

	curs = 0;
	while (curs < 9)
	{
		if (tab[curs][col] == test + '0')
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
