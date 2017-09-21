/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llonger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 13:51:43 by llonger           #+#    #+#             */
/*   Updated: 2017/09/19 13:51:43 by llonger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int		a;

	a = 0;
	if (begin_list == 0)
		return (0);
	while (begin_list->next != 0)
	{
		begin_list = begin_list->next;
		a++;
	}
	a += 1;
	return (a);
}
