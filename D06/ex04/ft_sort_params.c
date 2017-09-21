/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llonger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 17:34:01 by llonger           #+#    #+#             */
/*   Updated: 2017/09/11 17:34:01 by llonger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_swap(char **s1, char **s2)
{
	char *temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

int		ft_strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	while ((s1[a] != '\0') && (s2[a] != '\0') && (s1[a] == s2[a]))
		a++;
	return (s1[a] - s2[a]);
}

int		main(int argc, char **argv)
{
	int		i;

	i = 2;
	if (argc >= 2)
	{
		while (i != argc)
		{
			if (ft_strcmp(argv[i], argv[i - 1]) < 0)
			{
				ft_swap(&argv[i], &argv[i - 1]);
				i = 1;
			}
			else
				i++;
		}
		i = 1;
		while (i < argc)
		{
			ft_putstr(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
