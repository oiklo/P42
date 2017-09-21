/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llonger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 19:31:50 by llonger           #+#    #+#             */
/*   Updated: 2017/09/20 19:31:50 by llonger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
						void *data_ref, int (*cmp)())
{
	t_list *list_ptr;

	list_ptr = begin_list;
	while (list_ptr)
	{
		if (((*cmp)(list_ptr->data, data_ref)) == 0)
			(*f)(list_ptr->data);
		list_ptr = list_ptr->next;
	}
}
