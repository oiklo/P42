/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llonger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/17 10:14:38 by llonger           #+#    #+#             */
/*   Updated: 2017/09/17 10:14:43 by llonger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort(char **str, int len)
{
	int		i;
	char	*temp;
	int		j;

	i = 0;
	temp = 0;
	j = 0;
	while (i < (len - 1))
	{
		j = 0;
		while (str[i][j] == str[i + 1][j])
			j++;
		if (str[i][j] > str[i + 1][j])
		{
			temp = str[i];
			str[i] = str[i + 1];
			str[i + 1] = temp;
			i = -1;
		}
		i++;
	}
}

void	ft_sort_wordtab(char **tab)
{
	int len;

	len = 0;
	while (tab[len])
		len++;
	ft_sort(tab, len);
}
