/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lbft.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llonger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 17:47:23 by llonger           #+#    #+#             */
/*   Updated: 2017/09/16 17:48:51 by llonger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_doop(char *av1, char *av2, char *av3);
int		ft_atoi(char *str);
char	*checknb1(char *nb1);
void	ft_putstr(char *str);

#endif
